using FluentValidation;
using Microsoft.AspNetCore.Components.Web;
using Microsoft.AspNetCore.Components.WebAssembly.Hosting;
using Microsoft.Extensions.Configuration;
using System;
using VehicleManager;
using VehicleManager.Models;
using VehicleManager.Services;
using VehicleManager.Shared;

var builder = WebAssemblyHostBuilder.CreateDefault(args);
builder.RootComponents.Add<App>("#app");
builder.RootComponents.Add<HeadOutlet>("head::after");

builder.Services.AddScoped(sp => new HttpClient { BaseAddress = new Uri(builder.HostEnvironment.BaseAddress) });

//Add Services Here
builder.Services.AddSingleton<AppData>();
ConfigurationHelper.Initialize(builder.Configuration);

await builder.Build().RunAsync();
