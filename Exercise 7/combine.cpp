#include"map.cpp"
#include"filter.cpp"
#include"fold.cpp"

using namespace std;

///Take the sum of the squares of all even elements using map, filter and fold

int main(){
    int arr[] = {50, -4, 6, 12, 53, -45, 25, 123, 45, 267, -127, 95, -23};

    size_t filtered_size;
    int* result_arr = filter(arr, 13, even, filtered_size);
    Map(result_arr, filtered_size, int_square);
    unsigned long result = fold(result_arr, filtered_size, 0, int_sum);
    cout<<result;

    delete[] result_arr;
}
