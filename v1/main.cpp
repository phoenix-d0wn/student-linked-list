// main.cpp

# include "StudentList.h"

int main() {
    StudentList studentList;

    studentList.insertStudent("John", "S1", "123", "BAXI", 3.75);
    studentList.insertStudent("Jane", "S2", "456", "BAXZ", 3.55);
    studentList.printStudents();

    studentList.insertStudent("Joey", "S3", "789", "BAXZ", 4.00);
    studentList.printStudents();

    studentList.printStudents("BAXI");
    studentList.printStudents("BAXZ");

    studentList.SearchStudent("S2");
    studentList.SearchStudent("456");
    studentList.SearchStudent("S0");

    studentList.deleteStudent("S3");
    studentList.printStudents();
    studentList.SearchStudent("S3");

    studentList.deleteStudent("S1");
    studentList.printStudents();

    return 0;
}