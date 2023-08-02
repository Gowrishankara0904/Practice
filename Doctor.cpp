
#include <iostream>
#include "Doctor.h"

// Default constructor
Doctor ::Doctor(){
    doctorId = 1;
    doctorName = "Gowrishankar";
    doctorSpeciality = "Cardio";
    registerHospitalName = "Appolo";
    doctorFees = 100.0f;
}

// Parameterized constructor
Doctor ::Doctor(std::string id, std::string name, std::string rating, int doctorId, std::string doctorName,
                std::string doctorSpeciality, std::string regiserHospitalName, float doctorFees) : Hospital(id, name, rating)
{
    this->doctorId = doctorId;
    this->doctorName = doctorName;
    this->doctorSpeciality = doctorSpeciality;
    this->registerHospitalName = regiserHospitalName;
    this->doctorFees = doctorFees;
}

// To Calculate Tax
void Doctor ::calculateTax(){
    std::cout << "20% Tax On Doctor Fees" << (doctorFees * 0.2f) << "\n";
}

// Overloading  the << operator
std::ostream &operator<<(std::ostream &obj, Doctor &D){
    obj << "Hospital Id: " << D.hospital_id << "\n"
        << "Hospital Name:" << D.hospital_Name << "\n"
        << "Hospital Rating:" << D.hospital_rating << "\n"
        << "Doctor Id:" << D.doctorId << "\n"
        << "Doctor Name:" << D.doctorName << "\n"
        << "Doctor Speciality:" << D.doctorSpeciality << "\n"
        << "Register Hospital Name:" << D.registerHospitalName << "\n"
        << "Doctor Fees:" << D.doctorFees << "\n";
    return obj;
}
