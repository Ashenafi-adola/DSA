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

void delete_first(){
    if(head != NULL){
        head = head->next;
    }
}

void insert_last(int data){
    Node *newNode = new Node;
    newNode->data = data;
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    newNode->next = NULL;
    temp->next = newNode;
    
}

void delete_last(){
    Node* temp = head;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = NULL;
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
    delete_first();
    cout<<endl;
    display();
    delete_last();
    cout<<endl;
    display();
    insert_last(34);
    cout<<endl;
    display();
    return 0;
}