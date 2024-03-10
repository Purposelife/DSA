#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* right;
    Node* left;
    Node(int value){
        data = value;
        right = nullptr;
        left = nullptr;
    }
};

Node* insert(Node* root, int target){
    if(!root){
        Node* temp = new Node(target);
        return temp;
    }

    if(target< root->data){
        root->left = insert(root->left,target);
    }
    else{
        root->right = insert(root->right,target);
    }
    return root;
}
void inorder(Node* root){
    if(!root)
        return;
    
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

bool find(Node *root , int target) { 

    if(!root)
        return 0;

    if(root->data == target)
        return  1;

    if(root->data > target)
        find(root->left,target);
    else    
        find(root->right,target);
    
}
int main(){

    int arr[] = {6,3,17,5,11,18,2,1,20,14};
    Node* root = NULL;

    for(int i = 0 ; i < 10 ;i++){
        root = insert(root,arr[i]);
    }

    if(find(root,17))
        cout<<"mil gaya bhai"<<endl;
    else
        cout<<"nahi hai bhai"<<endl;
    //Traverse
    inorder(root);
    return 0;
}