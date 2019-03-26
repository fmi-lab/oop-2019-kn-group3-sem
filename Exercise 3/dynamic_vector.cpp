#include<iostream>
#include<iomanip>
#include<cassert>
#include "dynamic_vector.h"

using namespace std;

    template <typename T>
    Vector<T>::Vector(unsigned int other_size)
    {
        arr = new T[other_size];
        assert(arr);
        length_v = 0;
        size_v = other_size;
        start_size = other_size;
    }

    template <typename T>
    Vector<T>::Vector(const Vector<T>& other){
        arr = new T[other.length_v * 2];
        assert(arr);
        size_v = other.length_v * 2;
        start_size = size_v;
        for(int i = 0; i<other.length_v; i++)
        {
            arr[i] = other[i];
        }
        length_v = other.length_v;
    }

    template <typename T>
    Vector<T>::~Vector()
    {
        delete[] arr;
    }

    template <typename T>
    Vector<T>& Vector<T>::operator=(const Vector<T>& other){
        if(this != &other){
            if(this->arr){
                delete[] this->arr;
            }
            this->arr = new T[other.length_v*2];
            assert(this->arr);
            for(int i = 0; i<other.length_v; i++){
                this->arr[i] = other.arr[i];
            }
            length_v = other.length_v;
        }
        return *this;
    }

    template <typename T>
    void Vector<T>::resize_v(bool direction)
    {
        T* other_arr;
        if(direction)
        {
            other_arr = new T[size_v * 2];
        }
        else
        {
            other_arr = new T[size_v / 2];
        }
        for(int i = 0; i<length_v; i++)
        {
            other_arr[i] = arr[i];
        }
        delete[] arr;
        arr = other_arr;
        if(direction)
        {
            size_v *= 2;
        }
        else
        {
            size_v /= 2;
        }
    }

    template <typename T>
    void Vector<T>::add_element(T element)
    {
        if((double)length_v / size_v > 0.8)
        {
            resize_v(1);
        }
        arr[length_v] = element;
        length_v ++;
    }

    template <typename T>
    bool Vector<T>::add_element_at(T element, unsigned int pos)
    {
        if(pos>length_v)
        {
            return false;
        }
        if((double)length_v / size_v > 0.8)
        {
            resize_v(1);
        }
        for(int i = length_v; i > pos; i--)
        {
            arr[i] = arr[i-1];
        }
        arr[pos] = element;
        length_v ++;
        return true;
    }

    template <typename T>
    T Vector<T>::get_element_at(unsigned int pos)
    {
        return arr[pos];
    }

    template <typename T>
    bool Vector<T>::delete_element_at(unsigned int pos)
    {
        if(pos>length_v)
        {
            return false;
        }
        if((double)length_v / size_v < 0.2 && size_v >= start_size)
        {
            resize_v(0);
        }
        for(int i = pos; i<length_v - 1; i++)
        {
            arr[i] = arr[i+1];
        }
        length_v --;
        return true;
    }

    template <typename T>
    bool Vector<T>::set_element_at(T element, unsigned int pos){
        if(pos > length_v){
            return false;
        }
        arr[pos] = element;
        return true;
    }

    template <typename T>
    unsigned int Vector<T>::get_length()
    {
        return length_v;
    }

    template <typename T>
    unsigned int Vector<T>::get_size()
    {
        return size_v;
    }

    template <typename T>
    T& Vector<T>::operator[](unsigned int pos){
        return arr[pos];
    }

    template <typename T>
    T Vector<T>::operator[](unsigned int pos) const{
        return arr[pos];
    }

int main(){
    Vector<int> v1;
    Vector<char> v2;
    Vector<Vector<double> > v3;

    v1.add_element(5);
    v1.add_element(4);
    v1.add_element(7);
    v1.add_element(51);
    v1.add_element(24);
    v1.add_element(-6);

    cout<<v1[2];

}
