// StudentList.cpp

# include "StudentList.h"

#include <iostream>

StudentList::StudentList() {
    head = nullptr;
    tail = nullptr;
    currentNode = nullptr;
}

StudentList::~StudentList() {
    delete(head);
    delete(tail);
    delete(currentNode);
}

// ****

void StudentList::insertStudent(const std::string& n, const std::string& mn) {
    Student newStudent(n, mn);

    if (!head) {        
        head = &newStudent;
        tail = head;
    } 
    else {
        tail->next = &newStudent;
        tail = &newStudent;
    }

    size++;
}

const void StudentList::printStudents() {
    currentNode = head;

    while (currentNode) {
        std::cout << "\n\tName: " << currentNode->name;
        std::cout << "\n\tMatric No.: " << currentNode->matricNo;
        std::cout << "\n----";

        currentNode = currentNode->next;
    }
}