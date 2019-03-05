#pragma once
#include "B.h"

class A{
private:
    int x;
    char c;
public:
    friend double sumAB(const A&, const B&);
};
