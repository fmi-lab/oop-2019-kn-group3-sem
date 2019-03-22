#include<iostream>
using namespace std;

class complex_number{
private:
    double real;
    double comp;

public:
    complex_number(double real = 0, double comp = 0): real(real), comp(comp){} ///We write : real(real), comp(comp) only in constructors.
    complex_number(const complex_number& other): real(other.real), comp(other.comp){}
    ~complex_number() = default;
    complex_number& operator= (const complex_number& other){
        if(this != &other){
            real = other.real;
            comp = other.comp;
        }
        return *this;
    }

    double get_real() const{
        return real;
    }

    double get_comp() const{
        return comp;
    }

    complex_number operator+(const complex_number& other) const{
        cout<<"complex_number::operator+(complex_number)\n";
        complex_number result(this->real + other.real, this->comp + other.comp);
        return result;
    }

    complex_number operator-(const complex_number& other) const{
        complex_number result(this->real - other.real, this->comp - other.comp);
        return result;
    }

    complex_number operator*(const complex_number& other) const{
        complex_number result;
        result.real = this->real * other.real - this->comp * other.comp;
        result.comp = this->real * other.comp + this->comp * other.real;
    }

    complex_number operator+(int real) const{
        cout<<"complex_number::operator+(int)\n";
        complex_number result(this->real + real, this->comp);
        return result;
    }


    complex_number operator++(){
        real++;
        return *this;
    }
    complex_number operator++(int dummy){
        complex_number result(*this);
        ++*this; /// this->real++;
        return result;
    }

    bool operator<(const complex_number& other)const {
        return (this->real < other.real);
    }

    bool operator==(const complex_number& other) const {
        return (this->real == other.real);
    }

    /// operator >, >=, <=, !=...

    complex_number& operator+=(const complex_number& other) {
        *this = *this + other;
        return *this;
    }

    ///operator -=, *=, /=

    friend complex_number operator+ (int , const complex_number& );


};

    complex_number operator+(int real, const complex_number& other){
        cout<<"friend operator+(int, complex_number)\n";
        complex_number result(real + other.real, other.comp);
        return result;
    }


int main(){
    complex_number c1(3,3);
    complex_number c2(c1);
    c1+c1;
    c1 + 5;
    5 + c1;

    int x = 5;

    cout<<++x<<endl;
    cout<<x++<<endl;

    cout<<(c1++).get_real()<<endl;
    cout<<(++c1).get_real()<<endl;

    cout<<(c1<c2)<<endl;

    cout<<c1.get_real()<<' '<<c1.get_comp()<<endl;


    cout<<c2.get_real()<<' '<<c2.get_comp()<<endl;
    cout<<(c1+=c2).get_real()<<endl;
    cout<<c1.get_comp()<<endl;
}










