#pragma once
#include "set.cpp"

class Evens : public Set{
public:
    Evens();
    Evens(const vector<int>);
    Evens(const Evens&);
    Evens& operator=(const Evens&);

    bool member(const int) const;
};
