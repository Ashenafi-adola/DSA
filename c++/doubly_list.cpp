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

void delete_first(){
    if(head != NULL){
        head = head->next;
        head->prev = NULL;
    }
}

void delete_last(){
    if(tail != NULL){
        tail = tail->prev;
        tail->next = NULL;
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
    display();
    delete_first();
    insert_first(34);
    insert_first(65);
    
    display();
    delete_last();
    display();
    reverse();
    
    return 0;
}