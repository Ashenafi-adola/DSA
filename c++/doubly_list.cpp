#include<iostream>

using namespace std;

struct Node
{
    int data;
    Node * prev;
    Node * next;
};

Node * head = NULL;
Node * tail = NULL;

void insert_first(int data){
    Node * newNode = new Node;
    newNode->data = data;
    if(head == NULL){
        newNode->next = tail;
        newNode->prev = head;
        head = newNode;
        tail = newNode;
        
    }
    else{
        newNode->next = head;
        head->prev = newNode;
        newNode->prev = NULL;
        head = newNode;        
    }
}

void display(){
    Node * temp = head;
    while(temp != NULL){
        cout <<temp->data<<"->";
        temp = temp->next;
    }
    cout<<endl;
}
void reverse(){
    Node * temp = tail;
    while(temp != NULL){
        cout <<temp->data<<"->";
        temp = temp->prev;
    }
    cout<<endl;
}

int main(){
    insert_first(34);
    insert_first(54);
    insert_first(6);
    insert_first(34);
    insert_first(65);
    
    display();
    reverse();
    
    return 0;
}