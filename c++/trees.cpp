#include<iostream>

using namespace std;

struct node
{

    int date;
    node * left;
    node * right;

};
node * root = NULL;

void insertNode(int val){
    node *newNode = new node;
    newNode->date = val;
    newNode->left = NULL;
    newNode->right = NULL;

    if (root == NULL){
        root = newNode;
        return;
    }

    node * temp = root;
    node * parent = NULL;
    while (temp != NULL)
    {
        parent = temp;
        if (val < temp->date)
            temp = temp->left;
        else
            temp = temp->right;
    }

    if (val < parent->date)
        parent->left = newNode;
    else
        parent->right = newNode;
}
void inorder(node* cur){
    if (!cur) return;
    inorder(cur->left);
    cout<<cur->date<<endl;
    inorder(cur->right);
}

void traverse(){
    inorder(root);
}

int main(){

    insertNode(121);
    insertNode(34);
    insertNode(90);
    insertNode(111);
    insertNode(132);
    insertNode(9);
    // print inorder traversal (sorted order for BST)
    traverse();

    return 0;
}