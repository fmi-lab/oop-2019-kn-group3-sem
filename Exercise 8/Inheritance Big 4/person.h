#pragma once

class Person{
private:
    char* name;
    char EGN[11];
    unsigned int age;

public:
    Person(const char* = "Person 1", const char* = "0000000000", unsigned int age = 0);
    Person(const Person&);
    ~Person();
    Person& operator=(const Person&);
};
