#pragma once
#include"matrix.h"

template <typename T>
Matrix<T>::Matrix(size_t rows, size_t cols): rows(rows), cols(cols){
    data.resize(rows);
    for(int i = 0; i<rows; i++){
        data[i].resize(cols);
        for(int j = 0; j<cols; j++){
            data[i][j] = 0;
        }
    }
}

template <typename T>
Matrix<T>::Matrix(const Matrix& other): rows(other.rows), cols(other.cols), data(other.data){}

template <typename T>
Matrix<T>& Matrix<T>::operator=(const Matrix& other){
    if(this != & other){
        rows = other.rows;
        cols = other.cols;
        data = other.data;
    }
    return *this;
}

template <typename T>
size_t Matrix<T>::get_rows()const{
    return rows;
}

template <typename T>
size_t Matrix<T>::get_cols()const{
    return cols;
}

template <typename T>
istream& operator>>(istream& fin, Matrix<T>& mat){
    fin>>mat.rows>>mat.cols;
    mat.data.resize(mat.rows);
    for(int i = 0; i<mat.rows; i++){
        mat.data[i].resize(mat.cols);
    }

    for(int i = 0; i<mat.rows; i++){
        for(int j = 0; j<mat.cols; j++){
            fin>>mat.data[i][j];
        }
    }
}

template <typename T>
ostream& operator<<(ostream& fout, const Matrix<T>& mat){
    fout<<mat.rows<<' '<<mat.cols<<endl;
    for(int i = 0; i < mat.rows; i++){
        for(int j = 0; j < mat.cols; j++)
        fout<<mat.data[i][j]<<' ';
    }
}

template <typename T>
Matrix<T> Matrix<T>::operator*(const Matrix& other) const{
    Matrix<T> result(rows, other.cols);

    if(cols != other.rows){
        cout<<"Inclompatible matrices!\n";
    }
    for(int i = 0; i<rows; i++){
        for(int j = 0; j<cols; j++){
            for(int k = 0; k<other.cols; k++){
                result.data[i][k] += data[i][j] * other.data[j][k];
            }
        }
    }
    return result;

}


