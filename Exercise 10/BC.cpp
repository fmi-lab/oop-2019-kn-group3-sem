#include "B.cpp"
#include "C.cpp"

class BC : public B, public C
{
private:
    int bc;

public:
    int get_bc()const
    {
        return bc;
    }

    BC(int a = 30, int b = 31, int c = 32, int bc = 33) : A(a), B(5, b), C(10, c), bc(bc) {}
    ~BC()
    {
        cout<<"~BC()\n";
    }

    BC& operator=(const BC& other){
        if(this!= &other){
            this->A::operator=(other);
            this->B::partial_copy(other);
            this->C::partial_copy(other);
        }
        return *this;
    }
};
