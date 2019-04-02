#include<iostream>
using namespace std;

template <typename T>
T* filter(const T* arr, size_t arr_size, bool (*pred) (const T& element), size_t& result_size){
    int counter = 0;
    for(int i = 0; i<arr_size; i++){
        if(pred(arr[i])){
            counter++;
        }
    }

    T* result = new T[counter];

    int for_counter = 0;
    for(int i = 0; i<arr_size; i++){
        if(pred(arr[i])){
            result[for_counter] = arr[i];
            for_counter++;
        }
    }
    result_size = counter;
    return result;
}

bool even(const int& element){
    return element%2 == 0;
}

bool uneven(const int& element){
    return element%2 != 0;
}

template <typename T>
bool less_than_20(const T& element){
    return element < 20;
}


//int main(){
//    int arr[] = {50, -4, 6, 12, 53, -45, 25, 123, 45};
//
//    size_t filtered_size = 0;
//    int* filtered = filter(arr, 9, uneven, filtered_size);
//
//    for(int i = 0; i<filtered_size; i++){
//        cout<<filtered[i]<<endl;
//    }
//    delete[] filtered;
//    cout<<"*****************\n";
//
//    int* filtered2 = filter(arr, 9, less_than_20, filtered_size);
//
//    for(int i = 0; i<filtered_size; i++){
//        cout<<filtered2[i]<<endl;
//    }
//
//    delete[] filtered2;
//
//
//}













