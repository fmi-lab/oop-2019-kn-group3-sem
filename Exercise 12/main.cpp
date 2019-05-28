#include "set.cpp"
#include "evens.cpp"

int main(){
    vector<int> arr = {1,1,1,1,1,2,3,5,5,5,5,5,4,5,3,3,3,3};

    Evens e1(arr);

    for(int i = 0; i<e1.data.size(); i++){
        cout<<e1.data[i]<<endl;
    }
}
