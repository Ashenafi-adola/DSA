#include<iostream>

using namespace std;

int array[] = {34,45,23,56,23,44,35,77,26,3,2,5,43};
int array1[] = {34,45,23,56,23,44,35,77,26,3,2,5,43};
int array2[] = {34,45,23,56,23,44,35,77,26,3,2,5,43};

void bubble_sort(){
    for(int i = 0; i<13; i++){
        for(int j = 0; j < 13; j++){
            if(array[j] > array[j+1]){
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }

    for(int k = 0; k < 13; k++){
        cout<<array[k]<<", ";
    }
    cout<<endl;
}

int main(){

    bubble_sort();
    return 0;
}