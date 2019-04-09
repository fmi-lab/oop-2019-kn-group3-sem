#pragma once
#include "person.cpp"

class Student : public Person{
private:
    unsigned int fn;

public:
    Student(const char* = "Student 1", const char* = "0000000000", unsigned int age = 0 , unsigned int = 0);
    Student(const Student&);
    ~Student();
    Student& operator=(const Student&);
};
