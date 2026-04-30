// main.cpp

# include "StudentList.h"

# include <iostream>

int main() {

    StudentList studentList;

    studentList.insertStudent("John", "S1", "123", "BAXI", 5);
    studentList.insertStudent("Jane", "S2", "456", "BAXZ", 3);
    studentList.insertStudent("Joey", "S3", "789", "BAXZ", -1);

    studentList.printStudents();
    studentList.printStudents("BAXI");

    std::cout << "\n\nAvg CGPA: " << studentList.calcAverageCgpa();

    studentList.deleteStudent("S1");
    studentList.printStudents();

    std::cout << "\n\nAvg CGPA: " << studentList.calcAverageCgpa();

    studentList.searchStudent("S2");
    studentList.searchStudent("789");
    studentList.searchStudent("S0");

    return 0;

}