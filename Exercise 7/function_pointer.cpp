#include<iostream>
using namespace std;

int sum(int i1, int i2){
    return i1 + i2;
}


int main(){
    int (*func_p) (int, int);
    func_p = sum;
    cout<<func_p(3,5);

}
