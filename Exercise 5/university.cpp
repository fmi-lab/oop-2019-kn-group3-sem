#include"student.cpp"

class University{
private:
    Student students[500];

public:
    University(): students(){}
    University(const University& other): students(other.students){}
    ~University() = default;
    };

int main(){
    University u1;
    University u2(u1);
}
