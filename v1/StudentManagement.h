// StudentManagement.h

# include "StudentList.h"

class StudentManagement {

    private:
        StudentList studentList;
        int menuChoice;

    public:
        StudentManagement();
        ~StudentManagement();

        const void printMenu();
        const void menuLoop();

        const void insertStudent();
        const void deleteStudent();
        const void searchStudent();
        const void printStudents();
        // const void calcAverageCgpa();
};