#include<iostream>

using namespace std;

int array[12] = {
    3,43,23,54,2,4,5,12,36,34,63,23
};

int sortedArray[] = {12,23,34,45,56,67,78,89,90,123,234,345,456,678,789,890};

int size = sizeof(array)/sizeof(array[0]);
int s = sizeof(sortedArray)/sizeof(sortedArray[0]);

int linear_search(int target){
    for(int i = 0; i < size; i++){
        if(array[i] == target){
            return i;
        }
    }
    return 0;
}

int binary_search(int target){
    int L = 0;
    int R = s-1;
    int m;
    while(R != L){
        m = (L+R)/2;
        if(sortedArray[m] == target){
            return m;
        }
        else if(target > sortedArray[m]){
            L = m + 1;
        }
        else if(target < sortedArray[m]){
            R = m - 1;
        }
    }
    cout<<"Not found"<<"not found"<<endl<<endl;
    return -1;
}

int main(){

    cout<<linear_search(45)<<endl;
    cout<<binary_search(12);
    return 0;
}