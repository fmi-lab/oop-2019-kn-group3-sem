#include<iostream>
#include<time.h>
#include <stdlib.h>
#include<fstream>

using namespace std;

int main(){
    ofstream fout("random_matrix1.txt", ios::out);
    size_t n, m;
    cin>>n>>m;
    fout<<n<<" "<<m<<endl;
    srand (time(NULL));

    for(int i = 0; i<n*m; i++){
        fout<<rand() % 200 - 100<<' ';
    }
}
