// Student.h

#include <string>

const int MAX_NAME_LENGTH = 30;
const int MATRIC_NO_LENGTH = 10;
const int PROGRAM_LENGTH = 4;

class Student {
private:
  // pointers
  Student* next;
  Student* prev;

  std::string name;
  std::string matricNo;
  int icNo;
  std::string program;
  float cgpa;

  friend class StudentList;

public:
  Student(const std::string &, const std::string &, const int &,
          const std::string &, const float &);
  ~Student();
};
