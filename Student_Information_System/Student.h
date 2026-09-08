#pragma once

#include <string>

class Student{
    private:
        int id;
        float examScore;
        std::string name;

    public:
        Student();
        Student(int id, float examScore, std::string name);

        void printInfo();

        int getId();
        void setID(int _id);
        float getExamScore();
        void setExamScore(float _examScore);
        std::string getName();
        void setName(std::string _name);
};