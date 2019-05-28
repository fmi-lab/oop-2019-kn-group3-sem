#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

int main(){
    ofstream fout("output.txt", ios::out);

//    fout<<"Hello world!";

    ifstream fin("input.txt", ios::in);

    char buffer[100];
//    fin>>buffer;

//    cout<<buffer;

//    while(fin>>buffer){
//        fout<<buffer;
//    }

//    cout<<fin.peek()<<endl;
    char symbol;
    while(fin.read(buffer, 50)){
        cout<<strlen(buffer);
        fout.write(buffer, strlen(buffer));
//        fin.get(symbol);
    }



}
