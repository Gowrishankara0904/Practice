
#include <iostream>
#include "Hospital.h"

//Default Constructor

Hospital ::Hospital(){
    hospital_id = "123XYZ";
    hospital_Name = "XYZ";
    hospital_rating = "4";
}

// Parametrized Constructor
Hospital ::Hospital(std::string id, std::string name, std::string rating){
    hospital_id = id;
    hospital_Name = name;
    hospital_rating = rating;
}

// Copy Constructor
Hospital ::Hospital(Hospital &obj){
    hospital_id = obj.hospital_id;
    hospital_Name = obj.hospital_Name;
    hospital_rating = obj.hospital_rating;
}

// Overloading Operator << to print the object of the hospital class
std::ostream &operator<<(std::ostream &obj, Hospital h)
{
    obj << "Hospital Id: " << h.hospital_id << "\n"
        << "Hospital Name:" << h.hospital_Name << "\n"
        << "Hospital Rating:" << h.hospital_rating << "\n";
    return obj;
}