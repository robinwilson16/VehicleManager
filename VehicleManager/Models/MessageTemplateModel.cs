using FluentValidation;
using Microsoft.AspNetCore.Components;
using System.ComponentModel;
using System.ComponentModel.DataAnnotations;
using System.Text.Json.Serialization;

namespace VehicleManager.Models
{
    public class MessageTemplateModel
    {
        [Key]
        [DisplayName("ID")]
        public int MessageTemplateID { get; set; }
        public string? Code { get; set; }
        public string? Name { get; set; }
        public string? TemplateSubject { get; set; }
        public string? TemplateSubjectProcessed { get; set; }
        public string? TemplateContent { get; set; }
        public string? TemplateContentProcessed { get; set; }
        public bool? IncludeAcceptRejectLinks { get; set; }
        public int? Sequence { get; set; }
        public bool? IsEnabled { get; set; }
        public string? CreatedBy { get; set; }

        [DisplayFormat(DataFormatString = "{0:dd/MM/yyyy}", ApplyFormatInEditMode = true)]
        public DateTime? CreatedDate { get; set; }
        public string? LastModifiedBy { get; set; }

        [DisplayFormat(DataFormatString = "{0:dd/MM/yyyy}", ApplyFormatInEditMode = true)]
        public DateTime? LastModifiedDate { get; set; }

        [JsonIgnore]
        public virtual ICollection<MessageModel>? Messages { get; set; }
    }

    public class MessageTemplateValidator : AbstractValidator<MessageTemplateModel>
    {
        public MessageTemplateValidator()
        {
            RuleFor(t => t.Code).NotEmpty().WithMessage("You must provide a code");
            RuleFor(t => t.Name).NotNull().WithMessage("You must provide a name");
            RuleFor(t => t.TemplateContent).NotNull().WithMessage("You must provide content for the template");
        }
    }
}
