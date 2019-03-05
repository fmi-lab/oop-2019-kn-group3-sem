#pragma once
#include"processor.h"
class Machine{
private:
    char* name;
    double score;
    double price;
    Processor processor;

public:
    Machine();
    Machine(char*, double, double, const Processor&);
    Machine(const Machine&);
    ~Machine();
    Machine& operator=(const Machine&);
    void set_name(const char*);
    void set_score(double);
    double get_score();
    void print_name();
};
