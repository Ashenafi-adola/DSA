#include<iostream>

using namespace std;

int array[12] = {
    3,43,23,54,2,4,5,12,36,34,63,23
};

int size = sizeof(array)/sizeof(array[0]);

int linear_search(int target){
    for(int i = 0; i < size; i++){
        if(array[i] == target){
            return i;
        }
    }
    return 0;
}

int main(){

    cout<<linear_search(45);
    return 0;
}