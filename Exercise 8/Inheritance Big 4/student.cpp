#pragma once
#include "student.h"

using namespace std;

Student::Student(const char* name, const char* EGN, unsigned int age, unsigned int fn): Person(name, EGN, age), fn(fn) {
    cout<<"Student(...)\n";
}

Student::Student(const Student& other) : Person(other), fn(other.fn) {
    cout<<"Student(const Student&)\n";}

Student::~Student()
{
    cout<<"~Student()\n";
///    this->~Person(); No need! Calls it automatically
};

Student& Student::operator=(const Student& other)
{
    cout<<"Student::operator=(...)\n";
    this->Person::operator=(other);
//    if(this != &other){
    this->fn = other.fn;
//    }
}
