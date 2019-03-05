#include<iostream>
#include<cassert>
#include<cstring>
#include"machine.h"
#include"processor.cpp"

using namespace std;

Machine::Machine(): score(0.0), price(0.0){
    name = new char[1];
    assert(name);
    name[0] = '\0';
    processor = *(new Processor());
}

Machine::Machine(char* name, double score, double price, const Processor& processor): score(score), price(price), processor(processor){
    this->name = new char[strlen(name) + 1];
    assert(name);
    strcpy(this->name, name);
}

Machine::Machine(const Machine& other){
    if(this->name){
            delete name;
        }
        name = new char[strlen(other.name) + 1];
        assert(name);
        strcpy(name, other.name);, processor(processor)
        score = other.score;
        price = other.price;
}

Machine::~Machine(){
    if(name){
        delete name;
    }
}
Machine& Machine::operator=(const Machine& other){
    if(this != &other){
        if(this->name){
            delete name;
        }
        name = new char[strlen(other.name) + 1];
        assert(name);
        strcpy(name, other.name);
        score = other.score;
        price = other.price;
    }
    return *this;
}

void Machine::print_name(){
    cout<<name<<endl;
}

void Machine::set_name(const char* name){
    if(this->name){
            delete name;
    }
    this->name = new char[strlen(name) + 1];
    assert(this->name);
    strcpy(this->name, name);
}

void Machine::set_score(double score){
    this->score = score;
}

double Machine::get_score(){
    return score;
}


int main(){
    Processor p1;
    Machine m1, m2("machine 2", 100.0, 50.0, p1);
    cout<<m2.get_score()<<endl;
    m1 = m2; /// <=> m1.operator=(m2);
    m1.print_name();
    m2.set_name("machine 3");
    m2.print_name();
    m1.print_name();

    Machine m3(m1);

}
