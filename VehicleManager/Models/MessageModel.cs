namespace VehicleManager.Models
{
    public class MessageModel
    {
        public int MessageID { get; set; }
        public string? Message { get; set; }
        public MessageType? Type { get; set; }
        public decimal? Amount { get; set; }
        public bool? Accepted { get; set; }
        public MessageStatus? Status { get; set; }
        public string? SentBy { get; set; }
        public DateTime? SentDate { get; set; }
        public Guid? MessageGUID { get; set; }
    }

    public enum MessageType
    {
        InitialOffer = 1,
        FollowUp = 2,
        MoreInfo = 3,
        FinalOffer = 4,
        GoogleReview = 5
    }

    public enum MessageStatus
    {
        Pending = 0,
        Sent = 1,
        Failed = 2
    }
}
