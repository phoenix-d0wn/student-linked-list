// StudentList.cpp

#include "StudentList.h"

#include <iostream>

StudentList::StudentList() {
  head = nullptr;
  tail = nullptr;
  currentNode = nullptr;

  listSize = 0;
}

StudentList::~StudentList() {
  delete (head);
  delete (tail);
  delete (currentNode);
}

// *******

void StudentList::insertStudent(const std::string& name, const std::string& matricNo,
                                const int &icNo, const std::string& program,
                                const float &cgpa) {
  Student newStudent(name, matricNo, icNo, program, cgpa);

  if (!head) {
    head = &newStudent;
    tail = head;
  }
  else {
    tail->next = &newStudent;
    tail = &newStudent;
  }

  listSize++;
}



const void StudentList::displayStudents() {
  currentNode = head;

  while (currentNode) {
    std::cout << "\n----";
    std::cout << "\nName: " << currentNode->name;
    std::cout << "\nMatric No.: " << currentNode->matricNo;
    std::cout << "\nIC No.: " << currentNode->icNo;
    std::cout << "\nProgram: " << currentNode->program;
    std::cout << "\nCGPA: " << currentNode->cgpa;

    currentNode = currentNode->next;
  }
}
