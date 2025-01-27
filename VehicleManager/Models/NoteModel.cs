namespace VehicleManager.Models
{
    public class NoteModel
    {
        public int NoteID { get; set; }

        public virtual CustomerModel? CustomerEmail { get; set; }
        public string? NoteText { get; set; }
        public bool? IsAlert { get; set; }
        public string? CreatedBy { get; set; }
        public DateTime? CreatedDate { get; set; }
        public string? LastModifiedBy { get; set; }
        public DateTime? LastModifiedDate { get; set; }
    }
}
