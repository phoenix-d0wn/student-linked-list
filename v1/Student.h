// Student.h

# ifndef STUDENT_H
# define STUDENT_H

# include <string>

class Student {
    private:
        // pointers
        Student* next;

        std::string name;
        std::string matricNo;
        std::string icNo;
        std::string program;
        float cgpa;

        friend class StudentList;

    public:
        Student(const std::string&, const std::string&, const std::string&,
            const std::string&, const float&);
        ~Student();
};

# endif