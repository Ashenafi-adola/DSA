#include<iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *top = NULL;

bool isEmpty(){
    if(top == NULL){
        return true;
    }
    else{
        return false;
    }
}

void push(int data){
    Node * newNode = new Node;
    newNode->data = data;
    if(top == NULL){
        newNode->next = NULL;
        top = newNode;
    }
    else{
        newNode->next = top;
        top = newNode;
    }
}

void pop(){
    if(!isEmpty()){
        cout<<top->data<<endl;
        top = top->next;
    }
    else{
        cout<<"stack underflow!"<<endl;
    }
}

int main(){
    push(5);
    push(3);
    pop();
    pop();
    pop();
    cout<<isEmpty()<<endl;
    push(56);
    push(243);
    push(423);
    push(54);
    push(76);
    pop();
    pop();
    pop();
    pop();
    return 0;
}