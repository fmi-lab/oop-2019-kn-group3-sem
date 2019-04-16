#include"student.cpp"

using namespace std;

int main(){
    Person p1("Ivan", "1234567890", 10);
    Student s1("Petar", "0987654321", 19, 80123);

    Person p2(p1);
    Student s2(s1);

    p1 = p2;
    s1 = s2;

    Student s3;

    s3 = (Student&)p1;

    cout<<"object: "<<s3.get_fn()<<endl;

    Student* p_s;
    Person* p_p = &p1;
    p_s = (Student*)p_p;

    cout<<"pointer: "<<p_s->get_fn()<<endl;

    Person& ps_p = p2;
    Student& ps_s = (Student&)ps_p;

    cout<<"pseudonym: "<<ps_s.get_fn()<<endl;

    Student* p_s2 = &s2;
    Person* p_p2 = p_s2;

    p_s2->get_fn();
 ///   p_p2->get_fn(); WRONG!!!





    void (Person::*base_p)()const = Person::print;

    (p1.*base_p)();

    (s1.*base_p)();

    unsigned int (Student::*der_p)()const = Student::get_fn;

    cout<<(s1.*der_p)()<<endl;

    cout<<(s3.*der_p)()<<endl;

    unsigned int (Person::*base_p2)()const;
    base_p2 = (unsigned int (Person::*)()const) Student::get_fn;

    cout<<(s1.*base_p2)()<<endl;

    cout<<(p1.*base_p2)()<<endl;

    void (Student::*der_p2)()const = Person::print;

    (s1.*der_p2)();

///    (p1.*der_p2)(); WRONG!!!





}
