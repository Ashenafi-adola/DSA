#include<iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node* head = NULL;
Node* tail = NULL;

void insert_first(int data){

    Node *newNode = new Node;
    newNode->data = data;

    if(head == NULL){
        newNode->next = NULL;
        head = newNode;

    }
    else{
        newNode->next = head;
        head = newNode;
    }

} 

void display(){
    Node *temp = head;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
}


int main(){

    insert_first(45);
    insert_first(4);
    insert_first(4555);
    insert_first(4545);
    insert_first(435);

    display();

    return 0;
}