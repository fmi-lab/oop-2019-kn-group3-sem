#include<iostream>
using namespace std;

template <typename T, typename L>
L fold(const T* arr, size_t size_arr, L start_value, void (folder) (const T& element, L& accumulator)){
    L result = start_value;
    for(int i = 0; i < size_arr; i++){
        folder(arr[i], result);
    }
    return result;
}

void int_sum (const int& element, int& accumulator){
    accumulator += element;
}

template <typename T, typename L>
void template_sum(const T& element, L& accumulator){
    accumulator += element;
}

//int main(){
//    int arr[] = {50, -4, 6, 12, 53, -45, 25, 123, 45};
//    int sum = fold(arr, 9, 0, int_sum);
//    cout<<sum;
//
//    int sum2 = fold<int, int>(arr, 9, 0, template_sum<int, int>);
//    cout<<endl<<sum2;
//}
