#pragma once
#include<iostream>
using namespace std;

class A{
private:
    int a;

public:
    A(int a = 0): a(a){}
    int get_a()const{
        return a;
    }

    ~A(){
        cout<<"~A()\n";
    }
};
