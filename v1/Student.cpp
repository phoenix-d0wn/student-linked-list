// Student.cpp

# include "Student.h"

Student::Student(const std::string& n, const std::string& mn) {
    name = n;
    matricNo = mn;
}

Student::~Student() {
    delete(next);
}