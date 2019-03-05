#include<iostream>
#include<iomanip>
#include<cassert>
#include "dynamic_vector.h"

using namespace std;

    template <typename T>
    Vector<T>::Vector(unsigned int other_size = 20)
    {
        arr = new T[other_size];
        assert(arr);
        length_v = 0;
        size_v = other_size;
        start_size = other_size;
    }

    Vector::~Vector()
    {
        delete arr;
    }

    void Vector::resize_v(bool direction)
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
        delete arr;
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

    void Vector::add_element(T element)
    {
        if((double)length_v / size_v > 0.8)
        {
            resize_v(1);
        }
        arr[length_v] = element;
        length_v ++;
    }

    bool Vector::add_element_at(T element, unsigned int pos)
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

    T Vector::get_element_at(unsigned int pos)
    {
        return arr[pos];
    }

    bool Vector::delete_element_at(unsigned int pos)
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

    bool Vector::set_element_at(T element, unsigned int pos){
        if(pos > length_v){
            return false;
        }
        arr[pos] = element;
        return true;
    }

    unsigned int Vector::get_length()
    {
        return length_v;
    }

    unsigned int Vector::get_size()
    {
        return size_v;
    }
int main(){

}
