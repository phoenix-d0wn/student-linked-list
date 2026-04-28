// StudentList.h

# ifndef STUDENTLIST_H
# define STUDENTLIST_H

# include "Student.h"

class StudentList {
private:
    // pointers
    Student* head;
    Student* tail;
    Student* currentNode;

    int size;

public:
    StudentList();
    ~StudentList();

    void insertStudent(const std::string&, const std::string&, 
        const std::string&, const std::string&, const float&);
    void deleteStudent(const std::string&);

    const void SearchStudent(const std::string&);
    // const void searchUsingIcNo(const std::string&);

    const void printStudent();
    const void printStudent(const int&, const bool&);
    const void printStudents();
    const void printStudents(const std::string&);
};

# endif