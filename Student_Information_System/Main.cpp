#include "StudentManagement.h"
#include <list>

int main(){

    std::list<Student> students;

    students.emplace_back(1, 92.5, "Mustafa");
    students.emplace_back(2, 88.4, "Şevket");

    StudentManagement sm(students);
    
    return 0;
}