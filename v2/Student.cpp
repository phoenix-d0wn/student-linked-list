// Student.cpp

# include "Student.h"

# include <iostream>

Student::Student(const std::string& Name, const std::string MatricNo, 
            const std::string& IcNo, const std::string& Program, 
            const float& Cgpa = 0) {

    name        = Name;
    matricNo    = MatricNo;
    icNo        = IcNo;
    program     = Program;
    
    if (cgpa < 0.00)
        cgpa = 0.00;

    else if (cgpa > 4.00)
        cgpa = 4.00;

    else 
        cgpa = Cgpa;

}

Student::~Student() {}

// ********

const void Student::printStudent() {

    std::cout << "\tName      : " << name;
    std::cout << "\n\tMatric #  : " << matricNo;
    std::cout << "\n\tIC #      : " << icNo;
    std::cout << "\n\tProgram   : " << program;
    std::cout << "\n\tCGPA      : " << cgpa;

}

