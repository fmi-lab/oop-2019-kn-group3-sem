#pragma once
#include "person.h"
#include<cstring>
#include<cassert>
#include<iostream>

using namespace std;

Person::Person(const char* name, const char* EGN, unsigned int age): age(age)
{
    cout<<"Person(...)\n";
    this->name = new char[strlen(name) + 1];
    assert(this->name);
    strcpy(this->name, name);
    strcpy(this->EGN, EGN);
}

Person::Person(const Person& other): age(other.age)
{
    cout<<"Person(const Person&)\n";
    this->name = new char[strlen(other.name) + 1];
    assert(this->name);
    strcpy(this->name, other.name);
    strcpy(this->EGN, other.EGN);
}

Person::~Person()
{
    cout<<"~Person()\n";
    if(this->name)
    {
        delete [] name;
    }
}

Person& Person::operator=(const Person& other)
{

    cout<<"Person::operator=(...)\n";
    if(this != &other)
    {
        if(this->name){
            delete [] this->name;
        }
        this->name = new char[strlen(other.name) + 1];
        assert(this->name);
        strcpy(this->name, other.name);
        strcpy(this->EGN, other.EGN);
        this->age = other.age;
    }
    else
    {
        return *this;
    }
}











