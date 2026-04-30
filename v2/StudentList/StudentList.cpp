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

bool StudentList::deleteStudent(const std::string& matricNo) {

    if (!size)
        return false;

    else {

        if (head->matricNo == matricNo) {

            currentNode = head;
            head = currentNode->next;
            delete(currentNode);

            size--;

            return true;

        }

        currentNode = head;

        while (currentNode->next) {

            if (currentNode->next->matricNo == matricNo) {

                Student* nodeToDel = currentNode->next;
                currentNode->next = currentNode->next->next;

                delete(nodeToDel);

                if (!currentNode->next)
                    tail = currentNode;

                size--;

                return true;

            }

            currentNode = currentNode->next;

        }

        return false;

    }

}

const bool StudentList::searchStudent(const std::string& id) {

    if (!size)
        return false;

    else {

        currentNode = head;

        while (currentNode) {

            if (currentNode->matricNo == id || currentNode->icNo == id) {

                currentNode->printStudent();
                return true;

            }

            currentNode = currentNode->next;

        }

        return false;

    }

}

const bool StudentList::printStudents(std::string program) {

    if (!size)
        return false;

    else {

        // size, head, tail check
        std::cout << "\n\n";
        std::cout << "Size: " << size;
        std::cout << "\nHead: " << head->matricNo << ", ";
        std::cout << "Tail: " << tail->matricNo;
        std::cout << "\n\n";

        currentNode = head;
        int i = 1;
        
        while (currentNode) {

            if (program == "" || currentNode->program == program) {

                std::cout << "\n\n" << i;
                currentNode->printStudent();
                
                i++;
                
            }

            currentNode = currentNode->next;

        }

        return true;

    }

}

const float StudentList::calcAverageCgpa() {

    if (!size)
        return 0.00;

    else {

        currentNode = head;
        float sumOfCgpa{0};

        while (currentNode) {

            sumOfCgpa += currentNode->cgpa;

            currentNode = currentNode->next;

        }

        return sumOfCgpa / size;

    }

}