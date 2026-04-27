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

  void insertStudent(const char[], const char[], const int &, const char[],
                     const float &);
  void deleteStudent(const char[]);
  const Student searchWithMatricNo(const char[]);
  const Student searchWithIcNo(const int &);
  const float calcAverageCgpa();
  const void displayStudents(const char[]);
};
