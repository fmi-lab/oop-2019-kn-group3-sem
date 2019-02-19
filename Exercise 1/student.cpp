#include<iostream>
#include<cstring>
#include<cassert>
using namespace std;

class Student{
private:
    char* name;
    int fn;

public:
    void set_fn(int other){
        fn = other;
    }
    int get_fn(){
        return fn;
    }

    void set_name(char* other){
        if(strlen(name)){
            delete name;
        }
        name = new char[strlen(other) + 1];
        assert(name);
        strcpy(name, other); /// name = other; WRONG!!!

    }

    void print_name(){
        cout<<name<<endl;
    }

    Student(){
        cout<<"Constructor\n";
        name = new char[1];
        assert(name);
        strcpy(name,"\0");
        fn = 0;
    }

    Student(char* other_name, int other_fn){
        cout<<"Constructor with params\n";
        fn=other_fn;
//        set_name(other_name);
        name = new char[strlen(other_name) + 1];
        assert(name);
        strcpy(name, other_name);
    }

    ~Student(){
        cout<<"Destructor"<<endl;
        if(name){
            cout<<"Has name "<<name<<endl;
            delete name;
        }
    }
};

int main(){
//    Student s1;
//    char* str;
//    str = new char[strlen("Pesho") + 1];
//    assert(str);
//    strcpy(str, "Pesho");
//    s1.set_name(str);
//    s1.print_name();
//    delete str;
//    cout<<str<<endl;
//    str = new char[strlen("Ivan") + 1];
//    assert(str);
//    strcpy(str,"Ivan");
//    cout<<str<<endl;
//    s1.print_name();
//    delete str;

    Student s2("Angel", 42);
    s2.print_name();

    Student s3;

}


















