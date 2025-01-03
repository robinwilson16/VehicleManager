using System.Linq.Expressions;
using VehicleManager.Models;

namespace VehicleManager.Shared
{
    public static class GridSortHelper
    {
        public static Expression<Func<T, object>> GetSortExpression<T>(string propertyName)
        {
            var param = Expression.Parameter(typeof(T), "x");
            var body = Expression.Convert(Expression.Property(param, propertyName), typeof(object));
            return Expression.Lambda<Func<T, object>>(body, param);
        }

        public static Expression<Func<T, object>> GetNestedSortExpression<T>(string propertyName)
        {
            var param = Expression.Parameter(typeof(T), "x");
            var parts = propertyName.Split('.');
            Expression body = param;

            foreach (var part in parts)
            {
                try
                {
                    body = Expression.PropertyOrField(body, part);
                }
                catch
                {
                    body = Expression.PropertyOrField(param, parts[0].ToString());
                    break;
                }
            }

            body = Expression.Convert(body, typeof(object));
            return Expression.Lambda<Func<T, object>>(body, param);
        }
    }
}
