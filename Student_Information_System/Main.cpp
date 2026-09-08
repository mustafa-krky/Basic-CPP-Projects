#include "StudentManagement.h"
#include <list>

int main(){

    std::list<Student> students;

    students.emplace_back(1, 92.5, "John");
    students.emplace_back(2, 88.4, "Mike");
    students.emplace_back(3, 75.2, "Thomas");

    StudentManagement sm(students);
    
    return 0;
}