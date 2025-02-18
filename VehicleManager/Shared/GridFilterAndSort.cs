using Microsoft.Extensions.Logging;
using System.Linq.Expressions;
using System.Reflection.Metadata;
using VehicleManager.Models;

namespace VehicleManager.Shared
{
    public static class GridFilterAndSort
    {
        public static Expression<Func<T, object>> GetSortExpression<T>(string propertyName)
        {
            var param = Expression.Parameter(typeof(T), "x");
            var property = Expression.Property(param, propertyName);
            Expression body;

            if (property.Type.IsEnum || Nullable.GetUnderlyingType(property.Type)?.IsEnum == true)
            {
                var toStringMethod = typeof(Enum).GetMethod("ToString", Type.EmptyTypes);
                var underlyingType = Nullable.GetUnderlyingType(property.Type);
                if (underlyingType != null)
                {
                    var hasValue = Expression.Property(property, "HasValue");
                    var value = Expression.Property(property, "Value");
                    var toStringCall = Expression.Call(value, toStringMethod!);
                    body = Expression.Condition(hasValue, toStringCall, Expression.Constant(null, typeof(string)));
                }
                else
                {
                    body = Expression.Call(property, toStringMethod!);
                }
            }
            else
            {
                body = Expression.Convert(property, typeof(object));
            }

            return Expression.Lambda<Func<T, object>>(body, param);
        }

        public static Expression<Func<T, object>> GetNestedSortExpression<T>(string propertyName)
        {
            var param = Expression.Parameter(typeof(T), "x");
            var parts = propertyName.Split('.');
            Expression property = param;
            Expression? parentProperty = null;

            foreach (var part in parts)
            {
                parentProperty = property;
                property = Expression.PropertyOrField(property, part);
            }

            if (parentProperty != null)
            {
                var parentNotNull = Expression.NotEqual(parentProperty, Expression.Constant(null));
                var defaultValue = Expression.Constant(null, typeof(object));
                Expression convertedProperty;

                if (property.Type.IsEnum || Nullable.GetUnderlyingType(property.Type)?.IsEnum == true)
                {
                    var toStringMethod = typeof(Enum).GetMethod("ToString", Type.EmptyTypes);
                    var underlyingType = Nullable.GetUnderlyingType(property.Type);
                    if (underlyingType != null)
                    {
                        var hasValue = Expression.Property(property, "HasValue");
                        var value = Expression.Property(property, "Value");
                        var toStringCall = Expression.Call(value, toStringMethod!);
                        convertedProperty = Expression.Condition(hasValue, toStringCall, Expression.Constant(null, typeof(string)));
                    }
                    else
                    {
                        convertedProperty = Expression.Call(property, toStringMethod!);
                    }
                }
                else
                {
                    convertedProperty = Expression.Convert(property, typeof(object));
                }

                property = Expression.Condition(parentNotNull, convertedProperty, defaultValue);
            }
            else
            {
                property = Expression.Convert(property, typeof(object));
            }

            var comparison = Expression.Lambda<Func<T, object>>(property, param);
            return comparison;
        }

        public static Dictionary<string, (object? value, ComparisonOperator? comparisonOperator)>? ChangeFilter<T>(string fieldName, (object? value, ComparisonOperator? comparisonOperator) fieldValue, Dictionary<string, (object? value, ComparisonOperator? comparisonOperator)> filterFields, IList<Func<T, bool>> filters)
        {
            if (fieldValue.value == null || string.IsNullOrEmpty(fieldValue.value.ToString()))
            {
                if (filterFields != null)
                {
                    filterFields.Remove(fieldName);
                }
            }
            else
            {
                var property = typeof(T).GetProperty(fieldName.Split('.').First());
                if (property != null)
                {
                    var targetType = Nullable.GetUnderlyingType(property.PropertyType) ?? property.PropertyType;

                    object? convertedValue = null;
                    Console.WriteLine($"Filter {fieldName} value {fieldValue.value} with comparison {fieldValue.comparisonOperator} of type {targetType}");

                    if (targetType.IsEnum)
                    {
                        try
                        {
                            convertedValue = Enum.Parse(targetType, fieldValue.value.ToString()!);
                        }
                        catch (Exception ex)
                        {
                            //Logger.LogError(ex, "Error converting value for field {FieldName}", fieldName);
                        }
                    }
                    else if (targetType.IsClass && targetType != typeof(string))
                    {
                        try
                        {
                            //convertedValue = int.Parse(value.ToString()!);
                            convertedValue = Convert.ChangeType(fieldValue.value, targetType.GetProperties().FirstOrDefault()?.PropertyType ?? typeof(int));
                        }
                        catch (Exception ex)
                        {
                            //Logger.LogError(ex, "Error converting value for field {FieldName}", fieldName);
                        }
                    }
                    else if (targetType == typeof(bool) || targetType == typeof(bool?))
                    {
                        bool? oldValue = null;
                        bool? newValue = null;

                        //Get old and new value to toggle and discard value sent from UI
                        if (filterFields == null)
                            filterFields = new Dictionary<string, (object? value, ComparisonOperator? comparisonOperator)>();

                        if (filterFields.ContainsKey(fieldName))
                        {
                            if (bool.TryParse(filterFields[fieldName].value?.ToString(), out bool oldBool))
                            {
                                oldValue = oldBool;
                            }
                        }

                        if (oldValue == null)
                        {
                            newValue = true;
                        }
                        else if (oldValue == true)
                        {
                            newValue = false;
                        }
                        else
                        {
                            newValue = null;

                        }

                        try
                        {
                            convertedValue = newValue;
                        }
                        catch (Exception ex)
                        {
                            //Logger.LogError(ex, "Error converting value for field {FieldName}", fieldName);
                        }
                    }
                    else
                    {
                        try
                        {
                            convertedValue = Convert.ChangeType(fieldValue.value, targetType);
                        }
                        catch (Exception ex)
                        {
                            //Logger.LogError(ex, "Error converting value for field {FieldName}", fieldName);
                        }
                    }

                    if (fieldName != null)
                    {
                        //Allow bools to be set as NULL
                        if (convertedValue != null || !string.IsNullOrEmpty(convertedValue?.ToString()) || targetType == typeof(bool) || targetType == typeof(bool?))
                        {
                            if (filterFields == null)
                            {
                                filterFields = new Dictionary<string, (object? value, ComparisonOperator? comparisonOperator)>();
                            }

                            //filterFields[fieldName] = convertedValue;
                            filterFields[fieldName] = (convertedValue, fieldValue.comparisonOperator);
                            Console.WriteLine($"Filter {fieldName} set to {convertedValue} with comparison {fieldValue.comparisonOperator}");
                        }

                    }
                }
            }

            ApplyFilters<T>(filterFields, filters);

            return filterFields;
        }

        public static void ApplyFilters<T>(Dictionary<string, (object? value, ComparisonOperator? comparisonOperator)> filterFields, IList<Func<T, bool>> filters)
        {
            filters.Clear();

            if (filterFields != null)
            {
                foreach (var filter in filterFields)
                {
                    var propertyName = filter.Key;
                    var propertyValue = filter.Value;

                    var parameter = Expression.Parameter(typeof(T), "t");
                    Expression property = parameter;
                    Expression? parentProperty = null;

                    foreach (var member in propertyName.Split('.'))
                    {
                        //Do not need a not null check on the object itself
                        if (!property.ToString().Equals("t"))
                            parentProperty = property;

                        property = Expression.Property(property, member);
                    }

                    var constant = Expression.Constant(propertyValue.value);

                    Expression? comparison = null;
                    Expression? valueToCompare = property;

                    //Fields that can be null need a NULL check
                    if (Nullable.GetUnderlyingType(property.Type) != null)
                    {
                        var isNotNull = Expression.NotEqual(property, Expression.Constant(null));
                        var hasValue = Expression.Property(property, "HasValue");
                        var value = Expression.Property(property, "Value");
                        valueToCompare = value;

                        //Compare only the date part of datetime fields
                        if (property.Type == typeof(DateTime) || property.Type == typeof(DateTime?))
                        {
                            var dateProperty = Expression.Property(value, "Date");
                            var dateConstant = Expression.Property(constant, "Date");
                            valueToCompare = dateProperty;
                        }

                        Expression? equal;
                        if (property.Type == typeof(bool))
                        {
                            var boolConstant = Expression.Constant(Convert.ToBoolean(propertyValue.value), typeof(bool));
                            equal = Expression.Equal(property, boolConstant);
                        }
                        else if (property.Type == typeof(bool?))
                        {
                            var boolConstant = Expression.Constant(Convert.ToBoolean(propertyValue.value), typeof(bool?));
                            equal = Expression.Equal(property, boolConstant);
                        }
                        else
                        {
                            equal = Expression.Equal(valueToCompare, constant);
                        }
                        comparison = Expression.AndAlso(hasValue, equal);

                        //Need to add this to avoid an error when comparing types such as int? to int
                        comparison = Expression.AndAlso(isNotNull, comparison);
                    }
                    else
                    {
                        //Compare only the date part of datetime fields
                        if (property.Type == typeof(DateTime) || property.Type == typeof(DateTime?))
                        {
                            var dateProperty = Expression.Property(property, "Date");
                            var dateConstant = Expression.Property(constant, "Date");
                            valueToCompare = dateProperty;
                        }
                    }

                    switch (propertyValue.comparisonOperator)
                    {
                        case ComparisonOperator.Equals:
                            if (propertyValue.value is string)
                            {
                                var equalsMethod = typeof(string).GetMethod("Equals", new[] { typeof(string), typeof(StringComparison) });
                                var isNotNull = Expression.NotEqual(property, Expression.Constant(null));
                                comparison = Expression.Call(property, equalsMethod!, constant, Expression.Constant(StringComparison.CurrentCultureIgnoreCase));
                                comparison = Expression.AndAlso(isNotNull, comparison);
                            }
                            else if (property.Type == typeof(bool?) && propertyValue.value == null)
                            {
                                var isNull = Expression.Constant(null);
                                var hasValue = Expression.Property(property, "HasValue");
                                comparison = Expression.Equal(property, isNull);
                            }
                            else if (property.Type == typeof(bool))
                            {
                                var boolConstant = Expression.Constant(Convert.ToBoolean(propertyValue.value), typeof(bool));
                                comparison = Expression.Equal(property, boolConstant);
                            }
                            else if (property.Type == typeof(bool?))
                            {
                                var boolConstant = Expression.Constant(Convert.ToBoolean(propertyValue.value), typeof(bool?));
                                comparison = Expression.Equal(property, boolConstant);
                            }
                            else
                            {
                                comparison = Expression.Equal(valueToCompare, constant);
                            }
                            break;
                        case ComparisonOperator.NotEquals:
                            if (propertyValue.value is string)
                            {
                                var equalsMethod = typeof(string).GetMethod("Equals", new[] { typeof(string), typeof(StringComparison) });
                                var isNotNull = Expression.NotEqual(property, Expression.Constant(null));
                                var containsExpression = Expression.Call(property, equalsMethod!, constant, Expression.Constant(StringComparison.CurrentCultureIgnoreCase));
                                comparison = Expression.Not(containsExpression);

                                comparison = Expression.AndAlso(isNotNull, comparison);
                            }
                            else if (property.Type == typeof(bool))
                            {
                                var boolConstant = Expression.Constant(Convert.ToBoolean(propertyValue.value), typeof(bool));
                                comparison = Expression.NotEqual(property, boolConstant);
                            }
                            else if (property.Type == typeof(bool?))
                            {
                                var boolConstant = Expression.Constant(Convert.ToBoolean(propertyValue.value), typeof(bool?));
                                comparison = Expression.NotEqual(property, boolConstant);
                            }
                            else
                            {
                                comparison = Expression.NotEqual(valueToCompare, constant);
                            }
                            break;
                        case ComparisonOperator.GreaterThan:
                            comparison = Expression.GreaterThan(valueToCompare, constant);
                            break;
                        case ComparisonOperator.GreaterThanOrEqual:
                            comparison = Expression.GreaterThanOrEqual(valueToCompare, constant);
                            break;
                        case ComparisonOperator.LessThan:
                            comparison = Expression.LessThan(valueToCompare, constant);
                            break;
                        case ComparisonOperator.LessThanOrEqual:
                            comparison = Expression.LessThanOrEqual(valueToCompare, constant);
                            break;
                        case ComparisonOperator.Contains:
                            if (propertyValue.value is string)
                            {
                                var containsMethod = typeof(string).GetMethod("Contains", new[] { typeof(string), typeof(StringComparison) });
                                var isNotNull = Expression.NotEqual(property, Expression.Constant(null));
                                comparison = Expression.Call(property, containsMethod!, constant, Expression.Constant(StringComparison.CurrentCultureIgnoreCase));
                                comparison = Expression.AndAlso(isNotNull, comparison);
                            }
                            break;
                        case ComparisonOperator.DoesNotContain:
                            if (propertyValue.value is string)
                            {
                                var containsMethod = typeof(string).GetMethod("Contains", new[] { typeof(string), typeof(StringComparison) });
                                var isNotNull = Expression.NotEqual(property, Expression.Constant(null));
                                var containsExpression = Expression.Call(property, containsMethod!, constant, Expression.Constant(StringComparison.CurrentCultureIgnoreCase));
                                comparison = Expression.Not(containsExpression);
                                comparison = Expression.AndAlso(isNotNull, comparison);
                            }
                            break;
                    }

                    if (parentProperty != null)
                    {
                        var parentNotNull = Expression.NotEqual(parentProperty, Expression.Constant(null));
                        if (comparison != null)
                            comparison = Expression.AndAlso(parentNotNull, comparison);
                    }

                    if (comparison != null)
                    {
                        var lambda = Expression.Lambda<Func<T, bool>>(comparison, parameter);
                        Console.WriteLine(lambda);
                        filters.Add(lambda.Compile());
                    }
                }
            }

            // Trigger UI update
            //StateHasChanged();
        }
    }
}
