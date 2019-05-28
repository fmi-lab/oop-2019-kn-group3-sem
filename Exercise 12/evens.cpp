#pragma once
#include"evens.h"

Evens::Evens() : Set() {}

Evens::Evens(const vector<int> other)
{
    for(int i = 0; i<other.size(); i++)
    {
        bool repeat = false;
        bool uneven = false;
        if(other[i] % 2 == 1)
        {
            uneven = true;
        }
        for(int j = 0; j<data.size() && !uneven; j++)
        {
            if(other[i] == data[j])
            {
                repeat = true;
                break;
            }
        }
        if(!repeat && !uneven)
        {
            this->data.push_back(other[i]);
        }
    }
}

Evens::Evens(const Evens& other): Set(other) {}

Evens& Evens::operator=(const Evens& other)
{
    this->Set::operator=(other);
}

bool Evens::member(int element)const{
    for(int i = 0; i<data.size(); i++){
        if(element == data[i]){
            return true;
        }
    }
    return false;
}



