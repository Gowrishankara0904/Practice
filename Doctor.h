

#include <iostream>
#include "Hospital.h"

class Doctor : public Hospital{
    int doctorId;
    std::string doctorName;
    std::string doctorSpeciality;
    std::string registerHospitalName;
    float doctorFees;

public:

    // Default Constructor
    Doctor();

    // Parameterized constructor
    Doctor(std::string id, std::string name, std::string rating, int doctorId, std::string doctorName,
           std::string doctorSpeciality, std::string regiserHospitalName, float doctorFees);


    // Highest Tax Payer
    void calculateTax();

    std::string getDoctorName() const { return doctorName; }
    void setDoctorName(const std::string &doctorName_) { doctorName = doctorName_; }

    std::string getDoctorSpeciality() const { return doctorSpeciality; }
    void setDoctorSpeciality(const std::string &doctorSpeciality_) { doctorSpeciality = doctorSpeciality_; }


    float getDoctorFees() const { return doctorFees; }
    void setDoctorFees(float doctorFees_) { doctorFees = doctorFees_; }

    std::string getRegisterHospitalName() const { return registerHospitalName; }
    void setRegisterHospitalName(const std::string &registerHospitalName_) { registerHospitalName = registerHospitalName_; }
    
    friend std::ostream &operator<<(std::ostream &obj, Doctor &D);
};
