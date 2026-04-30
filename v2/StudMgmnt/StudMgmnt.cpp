// StudMgmnt.cpp

# include "StudMgmnt.h"

# include <iostream>
# include <fstream>

StudMgmnt::StudMgmnt() {

    readFromFile();

    menu();

    writeToFile();

}

StudMgmnt::~StudMgmnt() {}

// ********

const void StudMgmnt::displayMenu() {

    std::cout << "\nSTUDENT MANAGEMENT APP";

    std::cout << "\n1. Add";
    std::cout << "\n2. Delete";
    std::cout << "\n3. Search by Matric #";
    std::cout << "\n4. Search by IC #";
    std::cout << "\n5. Search by Program";
    std::cout << "\n6. Display All";
    std::cout << "\n7. Average CGPA";
    std::cout << "\n0. Quit";

}

const void StudMgmnt::menu() {

    while (true) {

        displayMenu();

        std::cout << "\nChoose [0-7]: ";
        std::cin >> menuChoice;

        switch (menuChoice) {
        
            case 0  :   break;
            
            case 1  :   insertStudent();
                        break;

            case 2  :   deleteStudent();
                        break;

            case 3  :
            case 4  :
            case 5  :   searchStudent();
                        break;

            case 6  :   printStudents();
                        break;

            case 7  :   calcAverageCgpa();
                        break;

            default :   std::cout << "\nInvalid input!";

        }

    }

}

// ********

const void StudMgmnt::insertStudent() {

    std::string name, matricNo, icNo, program;
    float cgpa;

    std::cout << "\nInsert student information";

    std::cout << "\nName        : ";
    std::cin >> name;

    std::cout << "Matric #    : ";
    std::cin >> matricNo;

    std::cout << "IC #        : ";
    std::cin >> icNo;

    std::cout << "Program     : ";
    std::cin >> program;

    std::cout << "CGPA        : ";
    std::cin >> cgpa;

    studentList.insertStudent(name, matricNo, icNo, program, cgpa);

}

const void StudMgmnt::deleteStudent() {

    std::string matricNo;
    std::cout << "\nDelete student";
    std::cout << "\nMatric #: ";
    std::cin >> matricNo;

    bool studentFound = studentList.deleteStudent(matricNo);

    if (!studentFound) 
        std::cout << "\nStudent w/ Matric # " << matricNo 
            << " not found!";

    else
        std::cout << "\nStudent w/ Matric # " << matricNo 
            << " successfully deleted.";

}

const void StudMgmnt::searchStudent() {}

const void StudMgmnt::printStudents() {

    std::cout << "\nSTUDENTS";
    studentList.printStudents();

}

const void StudMgmnt::calcAverageCgpa() {}

// *******

const bool StudMgmnt::readFromFile() {

    std::ifstream myFile("Students.txt");

    if (!myFile)
        return 0;

    std::string line = "";
    
    while (!myFile.eof()) {

        std::string lineList[5];
        std::getline(myFile, line);

        int j = 0;
        for (int i = 0; i < line.size(); i++) {

            if (line[i] == ';') {
                j++;
                continue;
            }

            lineList[j] += line[i];

        }

        studentList.insertStudent(lineList[0], lineList[1], lineList[2],
            lineList[3], std::stof(lineList[4]));

    }

    myFile.close();
    return 1;

}

const bool StudMgmnt::writeToFile() {

    std::ofstream myFile("Students.txt", std::ios::out);

    if (!myFile)
        return 0;

    studentList.currentNode = studentList.head;

    while (studentList.currentNode) {

        myFile << studentList.currentNode->name << ";";
        myFile << studentList.currentNode->matricNo << ";";
        myFile << studentList.currentNode->icNo << ";";
        myFile << studentList.currentNode->program << ";";
        myFile << studentList.currentNode->cgpa << ";";
        myFile << std::endl;
    }

    myFile.close();
    return 1;

}