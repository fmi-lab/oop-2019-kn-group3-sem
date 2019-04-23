#pragma once
#include "A.cpp"


class B : virtual public A
{
private:
    int b;

public:
    B(int a = 10, int b = 11): A(a), b(b) {}
    int get_b()const
    {
        return b;
    }
    ~B()
    {
        cout<<"~B()\n";
    }

    B& partial_copy(const B& other){
        b = other.b;
    }
};
