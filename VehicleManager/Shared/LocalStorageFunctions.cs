using Microsoft.Extensions.Logging;
using Microsoft.JSInterop;
using System.Text.Json;
using System.Threading.Tasks;

namespace VehicleManager.Shared
{
    public static class LocalStorageFunctions
    {
        private static readonly JsonSerializerOptions _jsonOptions = new JsonSerializerOptions
        {
            PropertyNamingPolicy = JsonNamingPolicy.CamelCase,
            WriteIndented = true
        };

        public static async Task SetItem(IJSRuntime jsRuntime, ILogger logger, string key, object value)
        {
            var json = JsonSerializer.Serialize(value, _jsonOptions);
            await jsRuntime.InvokeVoidAsync("localStorageInterop.setItem", key, json);
            logger.LogInformation($"Key {key} value saved as {value}");
        }

        public static async Task<string> GetItem(IJSRuntime jsRuntime, ILogger logger, string key)
        {
            var value = await jsRuntime.InvokeAsync<string>("localStorageInterop.getItem", key);
            logger.LogInformation($"Key {key} value retrieved as {value}");

            return value;
        }

        public static async Task<T?> GetItem<T>(IJSRuntime jsRuntime, ILogger logger, string key)
        {
            var json = await GetItem(jsRuntime, logger, key);
            return string.IsNullOrEmpty(json) ? default : JsonSerializer.Deserialize<T>(json, _jsonOptions);
        }

        public static async Task RemoveItem(IJSRuntime jsRuntime, ILogger logger, string key)
        {
            var value = await jsRuntime.InvokeAsync<string>("localStorageInterop.removeItem", key);
            logger.LogInformation($"Key {key} removed");
        }

        public static async Task Clear(IJSRuntime jsRuntime, ILogger logger)
        {
            var value = await jsRuntime.InvokeAsync<string>("localStorageInterop.clear");
            logger.LogInformation($"Local storage cleared");
        }
    }
}
