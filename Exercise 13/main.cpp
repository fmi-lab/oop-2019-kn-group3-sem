#include"matrix.cpp"
#include<fstream>
#include<iomanip>

int main(){
    clock_t tStart = clock();

    Matrix<int> m1(10,15);
    Matrix<int> m2(m1);

    ifstream fin1("random_matrix1.txt", ios::in);
    ifstream fin2("random_matrix2.txt", ios::in);

    fin1>>m1;
    fin2>>m2;

    ofstream fout("result.txt.", ios::out);

    fout<<(m1*m2);

    printf("Time taken: %.2fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
}
