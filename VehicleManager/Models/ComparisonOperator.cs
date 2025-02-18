using System.ComponentModel;
using System.ComponentModel.DataAnnotations;

public enum ComparisonOperator
{
    [Display(Name = "Equals")]
    [Description("=")]
    Equals,

    [Display(Name = "Not Equals")]
    [Description("<>")]
    NotEquals,

    [Display(Name = "Greater Than")]
    [Description(">")]
    GreaterThan,

    [Display(Name = "Greater Than Or Equal")]
    [Description(">=")]
    GreaterThanOrEqual,

    [Display(Name = "Less Than")]
    [Description("<")]
    LessThan,

    [Display(Name = "Less Than Or Equal")]
    [Description("<=")]
    LessThanOrEqual,

    [Display(Name = "Contains")]
    [Description("Contains")]
    Contains,

    [Display(Name = "Does Not Contain")]
    [Description("Does Not Contain")]
    DoesNotContain
}
