namespace VehicleManager.Shared
{
    public static class CSSFunctions
    {
        public static string? BoolCSS(bool? value)
        {
            if (value == true)
                return "fa-solid fa-square-check";
            else if (value == false)
                return "fa-regular fa-square";
            else
                return "fa-regular fa-square-minus";
        }
    }
}
