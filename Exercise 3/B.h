#pragma once
#include "A.h"

class B{
    private:
    double y;

    public:
    friend double sumAB(const A&, const B&);
};
