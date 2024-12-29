namespace VehicleManager.Shared
{
    public static class StringFunctions
    {
        public static string? SubstringOrDefault(this string? value, int? startIndex)
        {
            string? result;
            if (startIndex == null)
                result = value;
            else if (value?.Length < startIndex)
                result = value;
            else
                result = value?.Substring((int)startIndex);

            return result;
        }

        public static string? SubstringOrDefault(this string? value, int? startIndex, int? length)
        {
            string? result;
            if (startIndex == null)
                result = null;
            else if (value?.Length < startIndex)
                result = value;
            else if (length == null)
                result = value?.Substring((int)startIndex);

            if (value?.Length > length - startIndex)
                result = value?.Substring((int)startIndex!, (int)length!);
            else
                result = value;

            return result;
        }

        public static string? FormatFieldChangedValue(string? fieldValue)
        {
            string? newFieldValue = "";

            if (fieldValue != null)
            {
                if (fieldValue.Contains("<") && fieldValue.Contains(">"))
                {
                    newFieldValue = "[HTML Content]";
                }
                else
                {
                    if (fieldValue.Length > 50)
                    {
                        newFieldValue = fieldValue.Substring(50) + "...";
                    }
                    else
                    {
                        newFieldValue = fieldValue;
                    }
                }
            }

            return newFieldValue;
        }
    }
}
