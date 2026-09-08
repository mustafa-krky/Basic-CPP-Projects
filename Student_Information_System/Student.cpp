#include "Student.h"
#include <iostream>

Student::Student(){}

Student::Student(int id, float examScore, std::string name) : id(id), examScore(examScore), name(name){}

void Student::printInfo(){
    std::cout << "•ID: " << this->getId() << " ";
    std::cout << "•Name: " << this->getName() << " ";
    std::cout << "•Exam score: " << this->getExamScore() << " ";
}

int Student::getId(){
    return this->id;
}

void Student::setID(int _id){
    this->id = _id;
}

float Student::getExamScore(){
    return this->examScore;
}

void Student::setExamScore(float _examScore){
    this->examScore = _examScore;
}

std::string Student::getName(){
    return this->name;
}

void Student::setName(std::string _name){
    this->name = _name;
}