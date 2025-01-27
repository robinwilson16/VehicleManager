using Microsoft.AspNetCore.Components.Forms;

namespace VehicleManager.Shared
{
    //Needed due to the fact that bool? returns the false option in an input select rather than the blank option
    public class CustomBoolInputSelect<TValue> : InputSelect<TValue>
    {
        protected override string? FormatValueAsString(TValue? value)
        {
            if (typeof(TValue) == typeof(bool))
            {
                return (bool)(object)value! ? "true" : "false";
            }
            else if (typeof(TValue) == typeof(bool?))
            {
                if (value == null)
                    return null;
                else
                    return (bool)(object)value ? "true" : "false";
            }

            return base.FormatValueAsString(value);
        }
    }
}
