#include<iostream>
#include<queue>
using namespace std;

class Node{
    public:
    int data;
    Node *right;
    Node *left;

    Node(int value){
        data = value;
        right = NULL;
        left = NULL;
    }
};
int main(){
    int x;
    cout<<"Enter root element";
    cin>>x;
    int first,second;
    queue<Node*>q;
    Node *root = new Node(x);
    q.push(root);

    //building binary tree;
    while(!q.empty()){
        //create left Node;
        Node *temp = q.front();
        cout<<"Enter the left value of temp "<<temp->data<<" : ";
        cin>>first; //left ki value kya hai
        if(first != -1){
            temp->left = new Node(first);
            q.push(temp->left);
        }

        //right node;
        cout<<"Enter the right value of temp "<<temp->data<<" : ";
        cin>>second;
        if(second != -1){
            temp->right = new Node(second);
            q.push(temp->right);
        }
    }
}