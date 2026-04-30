// StudentList.h

# ifndef STUDENTLIST_H
# define STUDENTLIST_H

# include "Student.h"

class StudentList {

    private:
        int size;

        // pointers
        Student* head;
        Student* tail;
        Student* currentNode;

    public:
        StudentList();
        ~StudentList();

        void insertStudent(const std::string&, const std::string, 
            const std::string&, const std::string&, const float&);
        bool deleteStudent(const std::string&);
        bool searchStudent(const std::string&);
        bool printAllStudents();
        float calcAverageCgpa();

};

# endif