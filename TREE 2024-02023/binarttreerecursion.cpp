#include<iostream>
using namespace std;

class Node{
    public:
    Node* right;
    Node* left;
    int data;

    Node(int value){
        data = value;
        right = left = NULL;
    }
};

void preorder(Node* root){
    if(root == NULL){
        return;
    }
    //node;
    cout<<root->data<<" ";
    //left
    preorder(root->left);
    //right
    preorder(root->right);
}

void inorder(Node* root){
    if(root == NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void postorder(Node* root){
    if(root==NULL)
        return;
    
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
Node* binarytree(){
    int x;
    // cout<<"Enter the value :";
    cin>>x;
    if(x==-1)
    return NULL;


    Node *temp = new Node(x);
    //left side create kiya
    cout<<"Enter the left child of "<<x << " : ";
    temp->left = binarytree();

    //right side create kiya
    cout<<"Enter the right child of "<<x << " : ";
    temp->right = binarytree();

    return temp;
}

int main(){
    cout<<"Enter the root Node: ";
    Node* root;
    root = binarytree();
    //preorder print

    cout<<"Pre Order: ";
    preorder(root);
    cout<<endl;

    //postorder
    cout<<"post order: ";
    postorder(root);
    cout<<endl;

    //inorder
    cout<<"In order: ";
    inorder(root);
    cout<<endl;
}