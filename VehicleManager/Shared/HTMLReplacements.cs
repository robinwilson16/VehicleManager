using Microsoft.AspNetCore.Components;

namespace VehicleManager.Shared
{
    public static class HTMLReplacements
    {
        public static MarkupString? AcceptRejectButtons(string? url)
        {
            var configuration = ConfigurationHelper.config;

            string? websiteHost = $"{configuration?["WebsiteAddress"]}";
            //string? url = Path.Combine(websiteHost, "EmailResponse", selectedRecordCopy?.MessageGUID?.ToString() ?? "");

            return
                (MarkupString)$@"<a rel='noopener' target='_blank' href='{url}/True' style='background-color: #198754; font-size: 18px; font-family: Helvetica, Arial, sans-serif; font-weight: bold; text-decoration: none; padding: 14px 20px; color: #ffffff; border-radius: 5px; display: inline-block; mso-padding-alt: 0;'>
                <!--[if mso]>
                <i style='letter-spacing: 25px; mso-font-width: -100%; mso-text-raise: 30pt;'>&nbsp;</i>
                <![endif]-->
                <span style='mso-text-raise: 15pt;'>✓ Accept Offer</span>
                <!--[if mso]>
                <i style='letter-spacing: 25px; mso-font-width: -100%;'>&nbsp;</i>
                <![endif]-->
            </a>&nbsp;&nbsp;&nbsp;&nbsp;
            <a rel='noopener' target='_blank' href='{url}/False' style='background-color: #dc3545; font-size: 18px; font-family: Helvetica, Arial, sans-serif; font-weight: bold; text-decoration: none; padding: 14px 20px; color: #ffffff; border-radius: 5px; display: inline-block; mso-padding-alt: 0;'>
                <!--[if mso]>
                <i style='letter-spacing: 25px; mso-font-width: -100%; mso-text-raise: 30pt;'>&nbsp;</i>
                <![endif]-->
                <span style='mso-text-raise: 15pt;'>✗ Reject Offer</span>
                <!--[if mso]>
                <i style='letter-spacing: 25px; mso-font-width: -100%;'>&nbsp;</i>
                <![endif]-->
            </a>";
        }
    }
}
