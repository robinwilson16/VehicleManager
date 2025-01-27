using VehicleManager.Models;
using System.Collections.Generic;

namespace VehicleManager.Shared
{
    public static class PropertyOrder
    {
        public static readonly Dictionary<string, string[]> Orders = new Dictionary<string, string[]>
        {
            {
                nameof(MessageModel), new[]
                {
                    "SentDate",
                    "Subject",
                    "Message",
                    "From",
                    "FromName",
                    "To",
                    "ToName",
                    "MessageTypeID",
                    "MessageStatusID"
                }
            },
            {
                nameof(MessageTemplateModel), new[]
                {
                    "MessageTemplateID",
                    "Code",
                    "Name",
                    "TemplateSubject",
                    "IncludeAcceptRejectLinks",
                    "Sequence",
                    "IsEnabled"
                }
            },
            {
                nameof(VehicleModel), new[]
                {
                    "Email",
                    "Name",
                    "PostCode",
                    "Tel",
                    "Make",
                    "Model",
                    "RegistrationNumber",
                    "SubmissionDateDate"
                }
            }
        };
    }
}
