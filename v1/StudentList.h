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

    void insertStudent(const std::string&, const std::string&);
    void deleteStudent(const std::string&);

    const void printStudents();
};

# endif