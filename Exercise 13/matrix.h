#pragma once
#include<iostream>
#include<vector>
#include<fstream>

using namespace std;

template <typename T>
class Matrix{
private:
    size_t rows;
    size_t cols;

public:
    vector<vector<T>> data;
    Matrix(size_t = 0, size_t = 0);
    Matrix(const Matrix&);
    Matrix& operator=(const Matrix&);

    size_t get_rows() const;
    size_t get_cols() const;

    template<typename L>
    friend istream& operator>>(istream&, Matrix<L>&);

    template<typename L>
    friend ostream& operator<<(ostream&, const Matrix<L>&);

    Matrix operator*(const Matrix& other) const;

};





