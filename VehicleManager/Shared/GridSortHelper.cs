using System.Linq.Expressions;
using System.Reflection.Metadata;
using VehicleManager.Models;

namespace VehicleManager.Shared
{
    public static class GridSortHelper
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
    }
}
