// StudentList.h

#include "Student.h"

class StudentList {
private:
  Student *head;
  Student *tail;
  Student *currentNode;

  int listSize;

public:
  StudentList();
  ~StudentList();

  void insertStudent(const std::string&, const std::string&, const int &, const std::string&, const float &);
  void deleteStudent(const std::string&);
  const Student searchWithMatricNo(const std::string&);
  const Student searchWithIcNo(const int &);
  const float calcAverageCgpa();
  const void displayStudents(const std::string&)
};
