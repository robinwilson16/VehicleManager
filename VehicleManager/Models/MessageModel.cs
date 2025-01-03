using Microsoft.AspNetCore.Components;
using System.ComponentModel.DataAnnotations.Schema;
using System.ComponentModel.DataAnnotations;
using FluentValidation;
using System.Text.Json.Serialization;
using System.ComponentModel;
using System;
using System.Runtime;

namespace VehicleManager.Models
{
    public class MessageModel
    {
        [Key]
        [DisplayName("ID")]
        public int MessageID { get; set; }

        [DisplayName("Unique ID")]
        public Guid? MessageGUID { get; set; }

        [DisplayName("Type")]
        public MessageType? MessageTypeID { get; set; }

        [DisplayName("Template")]
        public virtual MessageTemplateModel? MessageTemplate { get; set; }
        public string? Subject { get; set; }
        public string? Message { get; set; }
        public bool? MessageIsHTML { get; set; }
        public int? VehicleID { get; set; }
        public virtual VehicleModel? Vehicle { get; set; }

        [Column(TypeName = "decimal(19,4)")]
        [DataType(DataType.Currency)]
        [Display(GroupName = "IsAccepted")]
        public decimal? AmountOffered { get; set; }

        [DisplayName("Accepted?")]
        public bool? IsAccepted { get; set; }
        public string? From { get; set; }
        public string? FromName { get; set; }
        public string? To { get; set; }
        public string? ToName { get; set; }
        public string? CC { get; set; }
        public string? BCC { get; set; }

        [DisplayName("Sent?")]
        public bool? IsSent { get; set; }
        public DateTime? SentDate { get; set; }

        [DisplayName("Status")]
        public MessageStatus? MessageStatusID { get; set; }
        public string? CreatedBy { get; set; }
        public DateTime? CreatedDate { get; set; }
        public string? LastUpdatedBy { get; set; }
        public DateTime? LastUpdatedDate { get; set; }

        //Does not clone related entities
        //public MessageModel CloneShallow() => (MessageModel)MemberwiseClone();
    }

    public enum MessageType
    {
        [Display(Name = "To Customer")]
        ToCustomer = 1,

        [Display(Name = "To Company")]
        ToCompany = 2
    }

    public enum MessageStatus
    {
        Pending = 0,
        Sent = 1,
        Failed = 2
    }

    public class MessageValidator : AbstractValidator<MessageModel>
    {
        public MessageValidator()
        {
            RuleFor(m => m.Subject).NotEmpty().WithMessage("You must provide a subject for the email");
        }
    }
}
