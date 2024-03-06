#include<stdio.h>
#include<stdlib.h>
using namespace std;

class Node{
    public:
    int data;
    // Node* prev;
    Node* next;

    Node(int data){
        this->data = data;
        // this->prev= prev;
        this->next = NULL;
    }
    ~Node(){
        int value = this->data;
        if(this->next!=NULL){
            delete next;
            next = NULL;
        }
    }
};

void print(Node* &tail){
    do{
        cout<<tail->data<<" ";
        tail = tail -> next;
    }while(tail != temp)
}


void insertNode(Node* &tail,int element, int value){
    Node* newnode = new Node(value);
    if(tail == NULL){
        tail = newnode;
        newnode->next = newnode->next;
    }
    else{
        Node* current = tail;
        while(current->data!=element){
            current = current -> next;
        }
        newnode->next = current->next;
        current -> next = temp;
    }
}

void deleteNode(Node* &tail,int value){
    
}
int main(){
    Node newnode = new Node(10);
    Node* &head=newnode;
    Node* &tail=newnode;



    return 0;
}