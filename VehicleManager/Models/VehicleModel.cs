﻿using System.ComponentModel.DataAnnotations;
using System.Globalization;
using System.Text.Json;
using System.Text.Json.Serialization;

namespace VehicleManager.Models
{
    public class VehicleModel
    {
        [Key]
        public int SubmissionID { get; set; }

        [JsonPropertyName("submissionDate")]
        public string? SubmissionDate { get; set; }
        
        [JsonIgnore]
        [Display(Name = "Submission Date")]
        public DateTime? SubmissionDateDate
        {
            get { return SubmissionDate == null ? null : DateTime.ParseExact(SubmissionDate ?? "", "yyyy-MM-dd HH:mm:ss", new CultureInfo("en-GB")); }
        }
        public int? SubmissionCount { get; set; }
        public string? Name { get; set; }
        public string? Surname { get; set; }
        public string? Forename { get; set; }
        public string? Email { get; set; }
        public string? Tel { get; set; }
        public string? PostCode { get; set; }
        public string? Message { get; set; }
        public string? RegistrationNumber { get; set; }
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

        [JsonIgnore]
        public virtual CustomerModel? Customer { get; set; }
    }
}
