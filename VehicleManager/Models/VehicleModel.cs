using VehicleManager.Shared;
using System.ComponentModel.DataAnnotations;
using System.Globalization;
using System.Text.Json;
using System.Text.Json.Serialization;
using System.ComponentModel.DataAnnotations.Schema;
using System.Xml.Linq;

namespace VehicleManager.Models
{
    public class VehicleModel
    {
        [Key]
        [Display(Name = "ID")]
        public int SubmissionID { get; set; }

        [JsonPropertyName("submissionDate")]
        public string? SubmissionDate { get; set; }
        
        [JsonIgnore]
        [Display(Name = "Date")]
        public DateTime? SubmissionDateDate
        {
            get { return SubmissionDate == null ? null : DateTime.ParseExact(SubmissionDate ?? "", "yyyy-MM-dd HH:mm:ss", new CultureInfo("en-GB")); }
        }
        public int? SubmissionCount { get; set; }
        public string? Surname { get; set; }
        public string? Forename { get; set; }

        //[JsonIgnore]
        //private string? _Name;

        public string? Name
        {
            get { return Forename + " " + Surname; }
            //set
            //{
            //    _Name = Forename + " " + Surname;
            //}
        }

        public string? Email { get; set; }
        public string? Tel { get; set; }
        private string? _PostCode { get; set; }

        public string? PostCode
        {
            get
            {
                return _PostCode;
            }
            set
            {
                if (value != null)
                {
                    if (value.Length == 6 && !value.Contains(" "))
                    {
                        _PostCode = value?.SubstringOrDefault(0, 3)?.ToUpper() + " " + value?.SubstringOrDefault(3, 3)?.ToUpper();
                    }
                    else if (value.Length == 7 && !value.Contains(" "))
                    {
                        _PostCode = value?.SubstringOrDefault(0, 4)?.ToUpper() + " " + value?.SubstringOrDefault(4, 3)?.ToUpper();
                    }
                    else
                    {
                        _PostCode = value?.ToUpper();
                    }
                }
            }
        }

        //public string? PostCode { get; set; }
        public string? Message { get; set; }
        private string? _RegistrationNumber { get; set; }

        [Display(Name = "Reg Num")]
        public string? RegistrationNumber
        {
            get
            {
                return _RegistrationNumber;
            }
            set
            {
                if (value != null)
                {
                    if (value.Length == 7 && !value.Contains(" "))
                    {
                        _RegistrationNumber = value?.SubstringOrDefault(0, 4)?.ToUpper() + " " + value?.SubstringOrDefault(4, 3)?.ToUpper();
                    }
                    else
                    {
                        _RegistrationNumber = value?.ToUpper();
                    }
                }
            }
        }

        [Display(Name = "Year")]
        public string? YearOfManufacture { get; set; }
        public string? Make { get; set; }
        public string? Model { get; set; }
        public string? Description { get; set; }
        public string? Derivative { get; set; }
        public string? Colour { get; set; }
        public string? BodyStyle { get; set; }
        public string? FuelType { get; set; }
        public string? TransmissionType { get; set; }
        public string? EngineSizeCC { get; set; }
        public string? Category { get; set; }
        public string? DoorCount { get; set; }
        public string? GearCount { get; set; }
        public string? DriveAxle { get; set; }
        public string? EngineCode { get; set; }
        public string? EngineCylinderCount { get; set; }
        public string? EngineSizeLitre { get; set; }
        public string? WheelbaseMM { get; set; }

        //Extra Fields
        [Display(Name = "Status")]
        public SubmissionStatus? SubmissionStatus { get; set; }

        [Display(Name = "?")]
        public bool? HasAcceptedOffer { get; set; }

        [Column(TypeName = "decimal(19,4)")]
        [DisplayFormat(DataFormatString = "{0:C}", ApplyFormatInEditMode = true)]
        [DataType(DataType.Currency)]

        [Display(Name = "Last Offer")]
        public decimal? LastOfferAmount { get; set; }
        public DateTime? LastContacted { get; set; }

        [Display(Name = "Num Msgs Sent")]
        public int? NumberOfMessagesSent { get; set; }

        [JsonIgnore]
        public virtual CustomerModel? Customer { get; set; }
    }

    public enum SubmissionStatus
    {
        [Display(Name = "Awaiting Contact")]
        AwaitingContact = 1,

        [Display(Name = "Offer Made")]
        OfferMade = 2,

        [Display(Name = "Offer Accepted")]
        OfferAccepted = 3,

        [Display(Name = "Offer Rejected")]
        OfferRejected = 4,

        [Display(Name = "Second Offer Made")]
        SecondOfferMade = 5,

        [Display(Name = "Completed")]
        Completed = 6,

        [Display(Name = "Archived")]
        Archived = 7
    }
}
