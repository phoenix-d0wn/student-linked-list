// StudMgmnt.h

# ifndef STUDMGMNT_H
# define STUDMGMNT_H

# include "../StudentList/StudentList.h"

class StudMgmnt {

    private:
        StudentList studentList;
        int menuChoice;

    public:
        StudMgmnt();
        ~StudMgmnt();

        const void displayMenu();
        const void menu();

        const void insertStudent();
        const void deleteStudent();
        const void searchStudent();
        const void printStudents();
        const void calcAverageCgpa();

        const bool readFromFile();
        const bool writeToFile();

};

# endif