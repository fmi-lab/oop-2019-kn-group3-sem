#pragma once
class Processor{
private:
    double frequency;

public:
    Processor();
    Processor(double);
    Processor(const Processor& );
    Processor& operator=(const Processor&);
};
