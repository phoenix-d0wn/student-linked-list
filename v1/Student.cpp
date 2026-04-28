// Student.cpp

# include "Student.h"

Student::Student(const std::string& Name, const std::string& MatricNo, 
    const std::string& IcNo, const std::string& Program, 
    const float& Cgpa = 0.00) {
    name        = Name;
    matricNo    = MatricNo;
    icNo        = IcNo;
    program     = Program;
    cgpa        = Cgpa;
}

Student::~Student() {}