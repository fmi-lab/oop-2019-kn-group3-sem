#include<iostream>
using namespace std;

class B;

//double sumAB(const A& a, const B& b);

class A{
    private:
    int x;
    char c;
public:
    A(){
        x = 0;
        c = 'a';
    }
    friend double sumAB(const A&, const B&);
};

class B{
    private:
    double y;

    public:
    B(){
        y = 0;
    }
    friend double sumAB(const A&, const B&);
};

double sumAB(const A& a, const B& b){
    return a.x + b.y;
}

int main(){
    A a;
    B b;
    cout<<sumAB(a, b);
    A a2;
    a2 = a;
}
