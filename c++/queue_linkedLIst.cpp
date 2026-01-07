#include<iostream>

using namespace std;

struct Node
{
    int data;
    Node * next;
};
Node * front = NULL;
Node * rear = NULL;

void enqueue(int data){
    Node * newNode = new Node;
    newNode->data = data;
    if(front == NULL){
        newNode->next = NULL;
        front = newNode;
        rear = newNode;
    }
    else{
        newNode->next = rear->next;
        rear = newNode;
    }

}

int main(){


    return 0;
}