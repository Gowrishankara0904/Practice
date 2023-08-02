#include <iostream>
#include "Doctor.h"

// funtion to print tax of the doctor having highest fees

int highestTax(Doctor *arr, int n)
{
    float highfees = arr[0].getDoctorFees();
    int temp = 0;
    for (int i = 0; i < n; i++)

    {
        if (highfees < arr[i].getDoctorFees())
        {
            highfees = arr[i].getDoctorFees();
            temp = i;
        }
    }
    return temp;
}

// Funtion to find the hospital by doctors name

void findHospital(Doctor *arrD, int size)
{

    std::string name;
    std::cout << "Enter the Doctor's name : ";
    std::cin >> name;

    for (int i = 0; i < size; i++)
    {
        if (name == arrD[i].getDoctorName())
        {
            std::cout << "Hospital Name:" << arrD[i].hospitalName();
        }
    }
}

// Funtion to find hospital by rating

void findByrating(Hospital *arr, int size)
{
    std::string temp;
    std::cout << "Enter the rating:";
    std::cin >> temp;

    for (int i = 0; i < size; i++)
    {
        if (temp == arr[i].hospitalRating())
        {
            std::cout << "Hospital Found";
        }
    }
}

int main()
{

    int n;
    std::cout << "Enter the Number of Hospitals:";
    std::cin >> n;
    Hospital arrHospital[n];

    // Enter Hospital Data

    for (int i = 0; i < n; i++)
    {
        std::string id, name, rating;
        std::cout << "Enter Hospital id:";

        std::cin >> id;
        std::cout << "Enter Name of the Hospital:";

        std::cin >> name;
        std::cout << "Enter rating of hospital:";

        std::cin >> rating;
        
        arrHospital[i].setHospitalName(name);
        arrHospital[i].setHospitalRating(rating);
        arrHospital[i].setHospitalId(id);
    }

    int NUM;
    std::cout << "\n\nEnter the NnMber of Doctors:";
    std::cin >> NUM;
    Doctor arrDoctor[NUM];

    // Entering the Doctor's data

    for (int i = 0; i < n; i++)
    {
        std::string id, name, rating, docName, docSpeci, RegisHos;

        int docid;
        float fees;

        std::cout << "Enter Hospital id:";
        std::cin >> id;

        std::cout << "Enter Name of the Hospital:";
        std::cin >> name;

        std::cout << "Enter rating of hospital:";
        std::cin >> rating;

        std::cout << "Enter doctor Id:";
        std::cin >> docid;

        std::cout << "Enter doctor Name:";
        std::cin >> docName;

        std::cout << "Enter doctor Speciality:";
        std::cin >> docSpeci;

        std::cout << "Enter Registered hospital:";
        std::cin >> RegisHos;

        std::cout << "Enter doctor Fees:";
        std::cin >> fees;

        arrDoctor[i].setHospitalName(name);
        arrDoctor[i].setHospitalRating(rating);
        arrDoctor[i].setHospitalId(id);
        arrDoctor[i].setDoctorName(docName);
        arrDoctor[i].setDoctorSpeciality(docSpeci);
        arrDoctor[i].setRegisterHospitalName(RegisHos);
        arrDoctor[i].setDoctorFees(fees);
    }

    std::cout << "\n\n";

    findHospital(arrDoctor, NUM);
    findByrating(arrHospital, n);
    int tax = highestTax(arrDoctor, NUM);
    arrDoctor[tax].calculateTax();
}