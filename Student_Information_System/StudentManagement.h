#pragma once
#include "Student.h"
#include <string>
#include <list>

class StudentManagement{
    private:
        std::list<Student> students;
        void startProgram();

        void addStudent();
        void showAllStundents();
        void deleteStudent();
        void findStudent();

    public:
        StudentManagement();
        StudentManagement(const std::list<Student>& students);
};