using FluentValidation;
using Microsoft.AspNetCore.Components;
using System.ComponentModel.DataAnnotations;

namespace VehicleManager.Models
{
    public class MessageTemplateModel
    {
        [Key]
        public int MessageTemplateID { get; set; }
        public string? Code { get; set; }
        public string? Name { get; set; }
        public string? TemplateContent { get; set; }
        public int? Sequence { get; set; }
        public bool? IsEnabled { get; set; }
        public string? CreatedBy { get; set; }

        [DisplayFormat(DataFormatString = "{0:dd/MM/yyyy}", ApplyFormatInEditMode = true)]
        public DateTime? CreatedDate { get; set; }
        public string? LastUpdatedBy { get; set; }

        [DisplayFormat(DataFormatString = "{0:dd/MM/yyyy}", ApplyFormatInEditMode = true)]
        public DateTime? LastUpdatedDate { get; set; }
    }

    public class MessageTemplateValidator : AbstractValidator<MessageTemplateModel>
    {
        public MessageTemplateValidator()
        {
            RuleFor(t => t.Code).NotNull().WithMessage("You must provide a code");
            RuleFor(t => t.Name).NotNull().WithMessage("You must provide a name");
            RuleFor(t => t.TemplateContent).NotNull().WithMessage("You must provide content for the template");
        }
    }
}
