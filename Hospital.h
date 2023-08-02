#include <iostream>

class Hospital{
protected:
    std::string hospital_id;
    std::string hospital_Name;
    std::string hospital_rating;

public:
    Hospital();
    Hospital(std::string id, std::string name, std::string rating);
    Hospital(Hospital &obj);

    std::string hospitalId() const { return hospital_id; }
    void setHospitalId(const std::string &hospitalId) { hospital_id = hospitalId; }

    std::string hospitalName() const { return hospital_Name; }
    void setHospitalName(const std::string &hospitalName) { hospital_Name = hospitalName; }

    std::string hospitalRating() const { return hospital_rating; }
    void setHospitalRating(const std::string &hospitalRating) { hospital_rating = hospitalRating; }
    
    friend std::ostream &operator<<(std::ostream &obj, Hospital h);
};