// Student.h

# ifndef STUDENT_H
# define STUDENT_H

# include <string>

class Student {

    private:
        friend class StudentList;

        // student info
        std::string name;
        std::string matricNo;
        std::string icNo;
        std::string program;
        float cgpa;

        // pointers
        Student* next;
        Student* prev;

    public:
        Student(const std::string&, const std::string, 
            const std::string&, const std::string&, const float&);
        ~Student();

        const void printStudent();

};

# endif