// StudentManagement.cpp

# include "StudentManagement.h"

# include <iostream>

StudentManagement::StudentManagement() {

    menuLoop();

}

StudentManagement::~StudentManagement() {}

// ****

const void StudentManagement::printMenu() {

    std::cout << "\n\n==========================";
    std::cout << "\nSTUDENT MANAGEMENT SYSTEM";
    std::cout << "\n==========================";

    std::cout << "\n\t1. Insert New Student";
    std::cout << "\n\t2. Delete Student Data";
    std::cout << "\n\t3. Search Student w/ Matric #";
    std::cout << "\n\t4. Search Student w/ IC #";
    std::cout << "\n\t5. Print Students Based on Program";
    std::cout << "\n\t6. Print All Students";
    std::cout << "\n\t7. Calculate Average CGPA";
    std::cout << "\n\n\t0. Quit System";

    std::cout << "\n--------------------------";
}

const void StudentManagement::menuLoop() {

    while (menuChoice) {

        printMenu();

        std::cout << "\n\nChoose your option: ";
        std::cin >> menuChoice;

        switch (menuChoice) {
            
            case 0  :   return;

            case 1  :   insertStudent();
                        break;

            case 2  :   deleteStudent();
                        break;

            case 3  :   searchStudent();
                        break;

            case 4  :   searchStudent();
                        break;

            // case 5  :   printStudents();
            //             break;

            // case 6  :   printStudents();
            //             break;

            // case 7  :   calcAverageCgpa();
            //             break;

            default :   std::cout << "!!! Invalid input.";
                        std::cout << "Valid inputs are 0-7. !!!";

        }

    }

}

// ****

const void StudentManagement::insertStudent() {

    while (true) {

        std::string name, matricNo, icNo, program;
        float cgpa;

        std::cout << "\n--------------------------";
        std::cout << "\nEnter student information";

        std::cout << "\n\n\tName: ";
        std::cin >> name;
        
        std::cout << "\tMatric No.: ";
        std::cin >> matricNo;

        std::cout << "\tIC No.: ";
        std::cin >> icNo;

        std::cout << "\tProgram: ";
        std::cin >> program;

        std::cout << "\tCGPA: ";
        std::cin >> cgpa;

        std::cout << "\n*** Student information successfully saved. ***";

        std::cout << "\n--------------------------";

        studentList.insertStudent(name, matricNo, icNo, program, cgpa);

        char insertAnother;

        std::cout << "\nInsert another? [Y/n]: ";
        std::cin >> insertAnother;

        if (insertAnother == 'N' || insertAnother == 'n')
            break;
    }

}

const void StudentManagement::deleteStudent() {

    while (true) {

        std::cout << "\n\n--------------------------";
        std::cout << "\nEnter the matric no. of the student you want to delete";

        std::string matricNo;
        std::cout << "\n\nMatric No.: ";
        std::cin >> matricNo;

        char confirmDeletion;
        std::cout << "\nConfirm deletion? [y/N]: ";
        std::cin >> confirmDeletion;

        if (confirmDeletion == 'Y' || confirmDeletion == 'y') {
            std::cout << "\n";
            studentList.deleteStudent(matricNo);
        }

        std::cout << "\n--------------------------";

        char deleteAnother;
        std::cout << "\nDelete another? [Y/n]: ";
        std::cin >> deleteAnother;

        if (deleteAnother == 'N' || deleteAnother == 'n')
            break;

    }

}

const void StudentManagement::searchStudent() {

    while (true) {
            
        std::string id = "";
        std::cout << "\n--------------------------";

        if (menuChoice == 3) {
            std::cout << "\nSearch student using matric no.";
            std::cout << "\nMatric No.: ";
        }
        else {
            std::cout << "\nSearch student using IC no.";
            std::cout << "\nIC No.: ";
        }

        std::cin >> id;
        std::cout << "\n";
        studentList.searchStudent(id);
        std::cout << "\n--------------------------";

        char searchAnother;
        std::cout << "\n\nSearch another student? [Y/n]: ";
        std::cin >> searchAnother;

        if (searchAnother == 'N' || searchAnother == 'n')
            break;

    }

}