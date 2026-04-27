// StudentList.cpp

#include "StudentList.h"

StudentList::StudentList() {
  head = nullptr;
  tail = head;
  currentNode = nullptr;

  listSize = 0;
}

StudentList::~StudentList() {
  delete (head);
  delete (tail);
  delete (currentNode);
}

// *******

void StudentList::insertStudent(const std::string& name, const std::string matricNo,
                                const int &icNo, const std::string& program,
                                const float &cgpa) {
  Student newStudent(name, matricNo, icNo, program, cgpa)
}
