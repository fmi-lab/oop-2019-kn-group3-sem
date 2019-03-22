#include<iostream>

using namespace std;

class Student {
private:
    int fn;

public:
    Student(int fn = 0): fn(fn){
    cout<<"Student(int = 0)\n";
    }
    Student(const Student& other): fn(other.fn){
        cout<<"Student(const Student&)\n";
    }
    ~Student(){
        cout<<"~Student\n";
    }
};
