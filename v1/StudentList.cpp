// StudentList.cpp

# include "StudentList.h"

#include <iostream>

StudentList::StudentList() {

    head = nullptr;
    tail = nullptr;
    currentNode = nullptr;

    size = 0;

}

StudentList::~StudentList() {}

// ****

void StudentList::insertStudent(
    const std::string& name, const std::string& matricNo, 
    const std::string& icNo, const std::string& program, const float& cgpa) {

    Student *newStudent = new Student(name, matricNo, icNo, program, cgpa);

    if (!head) {        
        head = newStudent;
        tail = head;
    } 
    else {
        tail->next = newStudent;
        tail = newStudent;
    }

    size++;

}

void StudentList::deleteStudent(const std::string& matricNo) {

    if (head->matricNo == matricNo) {
            std::string matricNo = head->matricNo;
            std::string name = head->name;

            head = head->next;

            // display the student that was deleted
            std::cout << "*** Student [" << matricNo << "] " << name;
            std::cout << " deleted ***";

            return;
    }

    currentNode = head;
    while (currentNode->next) {

        if (currentNode->next->matricNo == matricNo) {
            std::string matricNo = currentNode->next->matricNo;
            std::string name = currentNode->next->name;

            currentNode->next = currentNode->next->next;

            // display the student that was deleted
            std::cout << "*** Student [" << matricNo << "] " << name;
            std::cout << "deleted ***";

            return;
        }

        currentNode = currentNode->next;

    }

    std::cout << "*** Student with that matric number was not found... ***";
}

// ****

const void StudentList::searchStudent(const std::string& id) {

    currentNode = head;
    while (currentNode) {

        if (currentNode->matricNo == id || currentNode->icNo == id) {
            std::cout << "==========================";
            std::cout << "\nSTUDENT INFORMATION";
            std::cout << "\n==========================";

            printStudent();
            return;
        }
        currentNode = currentNode->next;

    }

    std::cout << "*** Student information not found... ***";

}

// ****

const void StudentList::printStudent() {

    std::cout << "\n\tName: " << currentNode->name;
    std::cout << "\n\tMatric No.: " << currentNode->matricNo;
    std::cout << "\n\tIC No.: " << currentNode->icNo;
    std::cout << "\n\tProgram: " << currentNode->program;
    std::cout << "\n\tCGPA: " << currentNode->cgpa;
    std::cout << "\n--------------------------";

}

const void StudentList::printStudent(const int& index, 
    const bool& showProgram = true) {

    std::cout << "\n" << index << ".";
    std::cout << "\tName: " << currentNode->name;
    std::cout << "\n\tMatric No.: " << currentNode->matricNo;
    std::cout << "\n\tIC No.: " << currentNode->icNo;

    if (showProgram)
        std::cout << "\n\tProgram: " << currentNode->program;

    std::cout << "\n\tCGPA: " << currentNode->cgpa;
    std::cout << "\n--------------------------";

}

const void StudentList::printStudents() {

    std::cout << "==========================";
    std::cout << "\nSTUDENTS";
    std::cout << "\n==========================";

    currentNode = head;
    int i = 1;

    while (currentNode) {

        printStudent(i);

        currentNode = currentNode->next;
        i++;

    }

}

const void StudentList::printStudents(const std::string& program) {

    std::cout << "==========================";
    std::cout << "\nSTUDENTS IN " << program;
    std::cout << "\n==========================";

    currentNode = head;
    int i = 1;

    while (currentNode) {

        if (currentNode->program == program)
            printStudent(i, false);

        currentNode = currentNode->next;
        i++;

    }

}