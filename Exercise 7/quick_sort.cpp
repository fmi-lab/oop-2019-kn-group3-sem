#include<iostream>
#include<stdlib.h>

int int_compare(const void* i1, const void* i2){
    int number1 = *(int*)i1;
    int number2 = *(int*)i2;
    if(number1 < number2){
        return -1;
    } else if( number1 == number2){
        return 0;
    } else {
        return 1;
    }
}



int main(){
    int x = 7;
    double y = (double)x;
    int z = 6;
//    std::cout<<int_compare(&x,&z);

    int arr[] = {50, -4, 6, 12, 53, -45, 25, 123, 45};

    qsort(arr, 9, sizeof(int), int_compare);

    for(int i = 0; i<9; i++){
        std::cout<<arr[i]<<std::endl;
    }
}

















