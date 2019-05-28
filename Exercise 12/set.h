#pragma once
#include<iostream>
#include<vector>

using namespace std;

class Set{
protected:

public:
    vector<int> data;
    Set();
    Set(const vector<int>);
    Set(const Set&);
    virtual ~Set();
    Set& operator=(const Set&);

    virtual bool member(const int) const = 0;
};
