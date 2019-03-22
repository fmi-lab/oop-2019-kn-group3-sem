#pragma once
template <typename T>
class Vector
{
private:
    T* arr;
    unsigned int size_v;
    unsigned int length_v;
    unsigned int start_size;

public:
    Vector(unsigned int other_size = 20);
    ~Vector();
    void resize_v(bool direction);
    void add_element(T element);
    bool add_element_at(T element, unsigned int pos);
    T get_element_at(unsigned int pos);
    bool delete_element_at(unsigned int pos);
    bool set_element_at(T element, unsigned int pos);
    unsigned int get_length();
    unsigned int get_size();

    T operator[](unsigned int );

    T& operator[](unsigned int )const ;
};
