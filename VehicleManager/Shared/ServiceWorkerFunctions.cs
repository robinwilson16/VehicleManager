using Microsoft.AspNetCore.Components;
using Microsoft.JSInterop;

namespace VehicleManager.Shared
{
    public static class ServiceWorkerFunctions
    {
        public async static Task SetVersionNumber(IJSRuntime jsRuntime, string versionNumber)
        {
            await jsRuntime.InvokeVoidAsync("serviceWorkerInterop.setVersionNumber", versionNumber);
        }

        public async static Task<string?> GetCurrentVersionNumber(IJSRuntime jsRuntime)
        {
            string? versionNumber = null;
            try
            {
                versionNumber = await jsRuntime.InvokeAsync<string>("serviceWorkerInterop.getVersionNumber");
            }
            catch
            {
                
            }

            return versionNumber;
        }

        public async static Task UpdateServiceWorker(IJSRuntime jsRuntime, NavigationManager navigationManager)
        {
            await jsRuntime.InvokeVoidAsync("serviceWorkerInterop.updateServiceWorker");
            //navigationManager.NavigateTo(navigationManager.Uri, forceLoad: true);
        }
    }
}
