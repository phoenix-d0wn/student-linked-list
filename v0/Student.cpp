// Student.cpp

#include "Student.h"

Student::Student(const std::string &n, const std::string &matric, const int &ic,
                 const std::string &prog, const float &c) {
  name = n;
  matricNo = matric;
  icNo = ic;
  program = prog;
  cgpa = c;
}

Student::~Student() {}
