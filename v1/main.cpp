// main.cpp

# include "StudentList.h"

int main() {
    StudentList studentList;

    studentList.insertStudent("John", "S1");
    studentList.insertStudent("Jane", "S2");

    studentList.printStudents();

    return 0;
}