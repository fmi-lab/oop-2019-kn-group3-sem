#pragma once
#include "A.cpp"


class C : virtual public A
{
private:
    int c;

public:
    C(int a = 20, int c = 21): A(a), c(c) {}
    int get_c()const
    {
        return c;
    }

    ~C()
    {
        cout<<"~C()\n";
    }

    C& partial_copy(const C& other){
        c = other.c;
    }
};

