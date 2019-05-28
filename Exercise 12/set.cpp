#pragma once
#include "set.h"

Set::Set(){}

Set::Set(const vector<int> other){
    for(int i = 0; i<other.size(); i++){
        bool repeat = false;
        for(int j = 0; j<data.size(); j++){
            if(other[i] == data[j]){
                repeat = true;
                break;
            }
        }
        if(!repeat){
            this->data.push_back(other[i]);
        }
    }
}

Set::Set(const Set& other): data(other.data){}

Set::~Set(){}

Set& Set::operator=(const Set& other){
    if(this != &other){
        data = other.data;
    }
    return *this;
}
