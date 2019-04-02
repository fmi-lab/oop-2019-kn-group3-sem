#include<iostream>
using namespace std;

template <typename T>
void Map(T* arr, size_t arr_size, void (*transf) (T& element)){
    for(int i = 0; i<arr_size; i++){
        transf(arr[i]);
    }
}

void int_square(int& element){
    element *= element;
}

template<typename T>
void increment(T& element){
    element++;
}

//int main(){
//    int arr[] = {50, -4, 6, 12, 53, -45, 25, 123, 45};
//
////    Map(arr, 9, int_square);
//    Map(arr, 9, increment);
//    for(int i = 0; i<9; i++){
//        cout<<arr[i]<<endl;
//    }
//}
