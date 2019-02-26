#include<iostream>
#include<cassert>
#include<cstring>

using namespace std;

class Example{
private:
    int number1;
    double number2;
    char* str;
public:
    Example(int other_n1 = 0, double other_n2 = 0, char* other_str = "ABC"){
        number1 = other_n1;
        number2 = other_n2;
        str = new char[strlen(other_str) + 1];
        assert(str);
        strcpy(str, other_str);
    }

};

int main(){
    Example ex1();
}
