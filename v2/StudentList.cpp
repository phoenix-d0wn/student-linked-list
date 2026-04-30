// StudentList.cpp

# include "StudentList.h"

# include <iostream>

StudentList::StudentList() {

    size        = 0;

    head        = nullptr;
    tail        = nullptr;
    currentNode = nullptr;

}

StudentList::~StudentList() {}

// *******

void StudentList::insertStudent(const std::string& name, const std::string matricNo, 
            const std::string& icNo, const std::string& program, const float& cgpa) {

    if (!size) {

        head = new Student(name, matricNo, icNo, program, cgpa);
        tail = head;

        size++;

    } else {

        tail->next  = new Student(name, matricNo, icNo, program, cgpa);
        tail        = tail->next;

        size++;

    }

}

bool StudentList::printAllStudents() {

    if (!size)
        return false;

    else {

        currentNode = head;
        int i = 1;
        
        while (currentNode) {

            std::cout << "\n\n" << i;
            currentNode->printStudent();

            i++;

        }

        return true;

    }

}