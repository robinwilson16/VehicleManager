using System.ComponentModel;
using System.ComponentModel.DataAnnotations;
using System.Reflection;
using System.Text;
using System.Text.Json;

namespace VehicleManager.Shared
{
    public static class ModelFunctions
    {
        public static Type GetBaseType(this PropertyInfo property)
        {
            if (property == null)
            {
                throw new ArgumentNullException(nameof(property));
            }

            var propertyType = property.PropertyType;
            var underlyingType = Nullable.GetUnderlyingType(propertyType);

            return underlyingType ?? propertyType;
        }

        public static Type? GetPropertyType(string modelTypeName, string propertyName)
        {
            // Get the type of the model
            var modelType = Type.GetType(modelTypeName);
            if (modelType == null)
            {
                throw new ArgumentException($"Model type '{modelTypeName}' not found.");
            }

            // Get the property info
            var propertyInfo = modelType.GetProperty(propertyName);
            if (propertyInfo == null)
            {
                throw new ArgumentException($"Property '{propertyName}' not found in model type '{modelTypeName}'.");
            }

            // Return the property type
            return propertyInfo.PropertyType;
        }

        public static string? GetDisplayName(this PropertyInfo? property)
        {
            string? displayName = null;

            if (property != null)
            {
                string? displayNameAttribute = property.GetCustomAttribute<DisplayNameAttribute>()?.DisplayName;
                string? displayAttribute = property.GetCustomAttribute<DisplayAttribute>()?.Name;
                if (displayNameAttribute != null)
                    displayName = displayNameAttribute;
                else if (displayAttribute != null)
                    displayName = displayAttribute;
                else
                    displayName = GetFieldNameWithSpaces(property.Name, true);
            }

            return displayName;
        }

        public static string? GetDisplayGroup(this PropertyInfo? property)
        {
            //Used to define a bool property where true and false values format this property differently
            return property?.GetCustomAttribute<DisplayAttribute>()?.GroupName;
        }

        public static string? GetEnumDisplayName(this Enum? enumValue)
        {
            return enumValue?
                .GetType()
                .GetMember(enumValue.ToString())
                .FirstOrDefault()?
                .GetCustomAttribute<DisplayAttribute>()?
                .Name;
        }

        public static string? GetEnumDescription(this Enum? enumValue)
        {
            return enumValue?
                .GetType()
                .GetMember(enumValue.ToString())
                .FirstOrDefault()?
                .GetCustomAttribute<DescriptionAttribute>()?
                .Description;
        }

        public static string GetFieldNameWithSpaces(this string? text, bool? preserveAcronyms)
        {
            if (string.IsNullOrWhiteSpace(text))
                return string.Empty;
            StringBuilder newText = new StringBuilder(text.Length * 2);
            newText.Append(text[0]);
            for (int i = 1; i < text.Length; i++)
            {
                if (char.IsUpper(text[i]))
                    if ((text[i - 1] != ' ' && !char.IsUpper(text[i - 1])) ||
                        ((bool)(preserveAcronyms ?? false) && char.IsUpper(text[i - 1]) &&
                         i < text.Length - 1 && !char.IsUpper(text[i + 1])))
                        newText.Append(' ');
                newText.Append(text[i]);
            }
            return newText.ToString();
        }

        public static bool IsNullableEnum(this Type? t)
        {
            Type? u = Nullable.GetUnderlyingType(t);
            return u != null && u.IsEnum;
        }

        public static bool? GetIsTrue(this object? item, string? property)
        {
            return (bool?)item?.GetType().GetProperty(property ?? "")?.GetValue(item) ?? false;
        }

        public static T? Clone<T>(this T obj)
        {
            var json = JsonSerializer.Serialize(obj);
            return JsonSerializer.Deserialize<T>(json);
        }

        public static void CopyProperties<T>(this T source, T target)
        {
            if (source == null || target == null)
                throw new ArgumentNullException("Source or/and Target is null");

            var type = typeof(T);
            var properties = type.GetProperties(BindingFlags.Public | BindingFlags.Instance);

            foreach (var property in properties)
            {
                if (property.CanWrite)
                {
                    var value = property.GetValue(source);
                    property.SetValue(target, value);
                }
            }
        }

        public static string? DoDatabaseReplacements(string? messageText, object objectModel, string? format)
        {
            string? replacedText = messageText;

            if(messageText != null && objectModel != null)
            {
                foreach (var property in objectModel.GetType().GetProperties().OrderBy(p => p.Name))
                {
                    string? replaceFrom1;
                    string? replaceFrom2;
                    string? replaceTo;

                    //Console.WriteLine($"Type of {property.Name} is {property.PropertyType}");

                    if (format != null)
                    {
                        replaceFrom1 = $"<data:{objectModel.GetType().Name.Replace("Model", "")}.{property.Name},Format:{format}>";
                        replaceFrom2 = $"&lt;data:{objectModel.GetType().Name.Replace("Model", "")}.{property.Name},Format:{format}&gt;";

                        if (property.PropertyType == typeof(string))
                        {
                            replaceTo = objectModel.GetType().GetProperty(property.Name)?.GetValue(objectModel)?.ToString();
                        }
                        else if (property.PropertyType == typeof(DateTime) || property.PropertyType == typeof(DateTime?) && format.Any(x => !char.IsNumber(x)))
                        {
                            replaceTo = objectModel.GetType().GetProperty(property.Name)?.GetValue(objectModel)?.Format(format);
                        }
                        else if (property.PropertyType == typeof(int) || property.PropertyType == typeof(int?) && format.Any(x => char.IsNumber(x) && format.Any(x => char.IsLetter(x))))
                        {
                            replaceTo = objectModel.GetType().GetProperty(property.Name)?.GetValue(objectModel)?.Format(format);
                        }
                        else if (property.PropertyType == typeof(decimal) || property.PropertyType == typeof(decimal?) && format.Any(x => char.IsNumber(x) && format.Any(x => char.IsLetter(x))))
                        {
                            replaceTo = objectModel.GetType().GetProperty(property.Name)?.GetValue(objectModel)?.Format(format);
                        }
                        else if (property.PropertyType == typeof(bool) || property.PropertyType == typeof(bool?) && format.Contains("/"))
                        {
                            string[]? formatArray = format.Split("/");
                            replaceTo = (bool)(objectModel.GetType().GetProperty(property.Name)?.GetValue(objectModel) ?? false)? formatArray[0] : formatArray[1];
                        }
                        else
                        {
                            replaceTo = objectModel.GetType().GetProperty(property.Name)?.GetValue(objectModel)?.ToString();
                        }

                    }
                    else
                    {
                        replaceFrom1 = $"<data:{objectModel.GetType().Name.Replace("Model", "")}.{property.Name}>";
                        replaceFrom2 = $"&lt;data:{objectModel.GetType().Name.Replace("Model", "")}.{property.Name}&gt;";
                        replaceTo = objectModel.GetType().GetProperty(property.Name)?.GetValue(objectModel)?.ToString();
                    }

                    replacedText = replacedText?.Replace(replaceFrom1, replaceTo);
                    replacedText = replacedText?.Replace(replaceFrom2, replaceTo);

                }
            }

            return replacedText;
        }

        public static string? DoAllDatabaseReplacements(string? messageText, object objectModel)
        {
            string? replacedText = messageText;
            //Dates and Times
            replacedText = DoDatabaseReplacements(replacedText, objectModel, null);
            replacedText = DoDatabaseReplacements(replacedText, objectModel, "dd/MM/yyyy");
            replacedText = DoDatabaseReplacements(replacedText, objectModel, "dd/MM/yyyy HH:mm");
            replacedText = DoDatabaseReplacements(replacedText, objectModel, "dd/MM/yyyy HH:mm:ss");
            replacedText = DoDatabaseReplacements(replacedText, objectModel, "dd MMMM yyyy");
            replacedText = DoDatabaseReplacements(replacedText, objectModel, "dd MMMM yyyy HH:mm");
            replacedText = DoDatabaseReplacements(replacedText, objectModel, "dd MMMM yyyy HH:mm:ss");
            replacedText = DoDatabaseReplacements(replacedText, objectModel, "HH:mm");
            replacedText = DoDatabaseReplacements(replacedText, objectModel, "HH:mm:ss");
            replacedText = DoDatabaseReplacements(replacedText, objectModel, "d");
            replacedText = DoDatabaseReplacements(replacedText, objectModel, "dddd");
            replacedText = DoDatabaseReplacements(replacedText, objectModel, "ddd");
            replacedText = DoDatabaseReplacements(replacedText, objectModel, "MMMM");
            replacedText = DoDatabaseReplacements(replacedText, objectModel, "yyyy");
            replacedText = DoDatabaseReplacements(replacedText, objectModel, "yyyy-MM-dd");

            //Numbers
            replacedText = DoDatabaseReplacements(replacedText, objectModel, "N0");
            replacedText = DoDatabaseReplacements(replacedText, objectModel, "N1");
            replacedText = DoDatabaseReplacements(replacedText, objectModel, "N2");
            replacedText = DoDatabaseReplacements(replacedText, objectModel, "C0");
            replacedText = DoDatabaseReplacements(replacedText, objectModel, "C2");
            replacedText = DoDatabaseReplacements(replacedText, objectModel, "P0");
            replacedText = DoDatabaseReplacements(replacedText, objectModel, "P1");
            replacedText = DoDatabaseReplacements(replacedText, objectModel, "P2");

            //Bools
            replacedText = DoDatabaseReplacements(replacedText, objectModel, "True/False");
            replacedText = DoDatabaseReplacements(replacedText, objectModel, "Y/N");
            replacedText = DoDatabaseReplacements(replacedText, objectModel, "Yes/No");
            replacedText = DoDatabaseReplacements(replacedText, objectModel, "1/0");

            return replacedText;
        }

        public static Type? GetPropertyTypeFromModelAndNameDataTag(string? modelAndProperty)
        {
            string[]? modelAndPropertyArray = modelAndProperty?.Replace("<data:", "").Replace(">", "").Split(".");
            string? propertyToFormatModel = modelAndPropertyArray?[0];
            string? propertyToFormat = modelAndPropertyArray?[1];
            string? modelTypeName = $"VehicleManager.Models.{propertyToFormatModel}Model";
            string? propertyName = propertyToFormat;
            
            Console.WriteLine($"The type of the property '{propertyName}' in model '{modelTypeName}' is...");

            try
            {
                Type? propertyType = GetPropertyType(modelTypeName, propertyName ?? "");
                Console.WriteLine($"'{propertyType}'");
                return propertyType;
            }
            catch
            {
                return null;
            }

            //Console.WriteLine($"The type of the property '{propertyName}' in model '{modelTypeName}' is {propertyType}");
        }

        public static string Format(this object value, string format, IFormatProvider formatProvider = null)
        {
            if (value == null)
            {
                return string.Empty;
            }

            IFormattable formattable = value as IFormattable;

            if (formattable != null)
            {
                return formattable.ToString(format, formatProvider);
            }

            //throw new ArgumentException("value");
            return string.Empty;
        }
    }
}
