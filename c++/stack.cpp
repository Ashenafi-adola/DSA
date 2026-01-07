#include<iostream>

using namespace std;

int stack[10];
int top = -1;

bool isEmpty(){
    if(top == -1){
        return true;
    }
    else{
        return false;
    }
}

bool isFull(){
    if(top == 9){
        return true;
    }
    else{
        return false;
    }
}

void push(int data){
    if(!isFull()){
        top++;
        stack[top] = data;
    }
    else{
        cout<<"stack overflow!!!"<<endl;
    }
}

void pop(){
    if(!isEmpty()){
        cout<<stack[top]<<endl;
        top--;
    }
    else{
        cout<<"stack underflow!!"<<endl;
    }
}



int main(){
    cout<<isEmpty()<<endl;
    cout<<isFull()<<endl;
    push(34);
    push(45);
    push(65);
    push(43);
    pop();
    pop();
    pop();
    pop();
    pop();
    push(87);
    push(33);
    push(434);
    push(34);
    push(34);
    push(34);
    push(78);
    cout<<isEmpty()<<endl;
    cout<<isFull()<<endl;
    return 0;
}