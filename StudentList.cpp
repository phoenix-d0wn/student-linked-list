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

void StudentList::insertStudent(const char name[], const char matricNo[],
                                const int &icNo, const char program[],
                                const float &cgpa) {
  Student newStudent
}
