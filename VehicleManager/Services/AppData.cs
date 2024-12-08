using VehicleManager.Models;

namespace VehicleManager.Services
{
    public class AppData
    {
        private UserModel? _currentUser;
        public UserModel? CurrentUser
        {
            get
            {
                return _currentUser;
            }
            set
            {
                _currentUser = value;
                NotifyDataChanged();
            }
        }

        public AppData()
        {
            CurrentUser = new UserModel();
        }

        public event Action? OnChange;

        private void NotifyDataChanged() => OnChange?.Invoke();
    }
}
