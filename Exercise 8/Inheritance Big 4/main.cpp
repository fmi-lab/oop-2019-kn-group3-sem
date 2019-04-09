#include"student.cpp"

using namespace std;

int main(){
    Person p1("Ivan", "1234567890", 10);
    Student s1("Petar", "0987654321", 19, 80123);

    Person p2(p1);
    Student s2(s1);

    p1 = p2;
    s1 = s2;

}
