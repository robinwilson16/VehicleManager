using System.ComponentModel.DataAnnotations;
using System.Reflection;
using System.Text.Json;

namespace VehicleManager.Shared
{
    public static class ModelFunctions
    {
        public static string? GetDisplayName(this Enum? enumValue)
        {
            return enumValue?
                .GetType()
                .GetMember(enumValue.ToString())
                .FirstOrDefault()?
                .GetCustomAttribute<DisplayAttribute>()?
                .Name;
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
    }
}
