#include"processor.h"
using namespace std;

Processor::Processor(): frequency(0.0){
    cout<<"Processor()\n";
}

Processor::Processor(double frequency): frequency(frequency){
    cout<<"Processor(double)\n";
}

Processor::Processor(const Processor& other): frequency(other.frequency){
    cout<<"Processor(const Processor&)\n";
}

Processor& Processor::operator=(const Processor& other){
    cout<<"Processor::operator=\n";
    frequency = other.frequency;
}
