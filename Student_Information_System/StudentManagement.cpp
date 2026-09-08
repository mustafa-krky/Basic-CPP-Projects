#include "StudentManagement.h"
#include <iostream>

StudentManagement::StudentManagement(){}

StudentManagement::StudentManagement(const std::list<Student>& students) : students(students){
    startProgram();
}

void StudentManagement::startProgram(){
    std::cout << "\n* * * * * * * * * * * * * * * * * * * * * * *\n";
    std::cout << "* Welcome to the Student Management System  *\n";
    std::cout << "* * * * * * * * * * * * * * * * * * * * * * *\n";

    int choice;

    do{
        std::cout << "- - - - - - - - - - - - - \n";
        std::cout << "- - - - - MENU - - - - - -\n";
        std::cout << "- 1) Add a student - - - -\n";
        std::cout << "- 2) Show all students - -\n";
        std::cout << "- 3) Delete a student - --\n";
        std::cout << "- 4) Find a student - - --\n";
        std::cout << "- 5) Exit - - - - - - - --\n";
        std::cout << "- - - - - - - - - - - - - \n";

        std::cout << "Choose a number: ";
        std::cin >> choice;

        switch(choice){
            case 1:
            addStudent();
            break;

            case 2:
            showAllStundents();
            break;

            case 3:
            deleteStudent();
            break;

            case 4:
            findStudent();
            break;

            case 5:
            std::cout << "\n* * * * * The program has finished * * * * *\n";
            break;

            default:
            std::cout << "! ! ! Please enter correct number.\n";
            
        }

    }while(choice != 5);
}

void StudentManagement::addStudent(){
    int id;
    float examScore;
    std::string name;

    std::cout << "Enter the student ID: \n";
    std::cin >> id;

    std::cout << "Enter the exam score: \n";
    std::cin >> examScore;

    std::cin.ignore();
    std::cout << "Enter the student name: \n";
    getline(std::cin, name);

    this->students.emplace_back(Student(id, examScore, name));

}

void StudentManagement::showAllStundents(){
    std::list<Student>::iterator itr;

    std::cout << "\n* * * * * * * * STUDENTS * * * * * * * *\n";

    for(itr = students.begin(); itr != students.end(); itr++){
        itr->printInfo();
        std::cout << std::endl;
    }

    std::cout << "* * * * * * * * * * * * * * * * * * * *\n\n";
}

void StudentManagement::deleteStudent(){
    std::list<Student>::iterator itr;
    int id;

    std::cout << "Enter the student ID: \n";
    std::cin >> id;

    for(itr = students.begin(); itr != students.end(); itr++){
        if(itr->getId() == id)
            break;
    }

    if(itr == students.end()){
        std::cout << "No results found !\n";
    }else{
        this->students.erase(itr);
        std::cout << "Deletion successful...\n";
        showAllStundents();
    }
}

void StudentManagement::findStudent(){
    std::list<Student>::iterator itr;
    int id;

    std::cout << "Enter the student ID: \n";
    std::cin >> id;

    for(itr = students.begin(); itr != students.end(); itr++){
        if(itr->getId() == id)
            break;
    }

    if(itr == students.end()){
        std::cout << "No results found !\n";
    }else{
        std::cout << "\n* * * * * * * * Result * * * * * * * *\n";
        itr->printInfo();
        std::cout << std::endl;
    }
}