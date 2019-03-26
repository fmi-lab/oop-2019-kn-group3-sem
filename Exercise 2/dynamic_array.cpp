#include<iostream>
#include<iomanip>
#include<cassert>

using namespace std;

template <typename T>
class Vector
{
private:
    T* arr;
    unsigned int size_v;
    unsigned int length_v;
    unsigned int start_size;

public:
    Vector(unsigned int other_size = 20)
    {
        arr = new T[other_size];
        assert(arr);
        length_v = 0;
        size_v = other_size;
        start_size = other_size;
    }

    Vector(const Vector<T>& other){
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

    ~Vector()
    {
        delete arr;
    }

    Vector<T>& operator=(const Vector<T>& other){
        if(this != &other){
            if(this->arr){
                delete this->arr;
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

    void resize_v(bool direction)
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

    void add_element(T element)
    {
        if((double)length_v / size_v > 0.8)
        {
            resize_v(1);
        }
        arr[length_v] = element;
        length_v ++;
    }

    bool add_element_at(T element, unsigned int pos)
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

    T get_element_at(unsigned int pos)
    {
        return arr[pos];
    }

    bool delete_element_at(unsigned int pos)
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

    bool set_element_at(T element, unsigned int pos){
        if(pos > length_v){
            return false;
        }
        arr[pos] = element;
        return true;
    }

    unsigned int get_length()
    {
        return length_v;
    }

    unsigned int get_size()
    {
        return size_v;
    }
};

int main()
{
    Vector<double> v1(30);
    cout<<v1.get_size()<<endl;
    v1.add_element(42.0);
    v1.add_element(10);

    for(int i = 0; i<35; i++)
    {
        v1.add_element(i);
    }

    v1.add_element_at(666, 2);
    v1.delete_element_at(3);

    for(int i = 0; i<v1.get_length(); i++)
    {
        cout<<setw(4)<<v1.get_element_at(i);
    }
    cout<<endl<<v1.get_size()<<endl;


    for(int i = 0; i<30; i++)
    {
        v1.delete_element_at(3);
    }


    v1.set_element_at(100, v1.get_length() - 1);

    for(int i = 0; i<v1.get_length(); i++)
    {
        cout<<setw(4)<<v1.get_element_at(i);
    }
    cout<<endl<<v1.get_size()<<endl;

    cout<<"\n*****************************\n";


    Vector<char> v2;

    for(int i = 0; i<30; i++){
        v2.add_element('a');
    }

    for(int i = 0; i<v2.get_length(); i++)
    {
        cout<<setw(2)<<v2.get_element_at(i);
    }

}
















