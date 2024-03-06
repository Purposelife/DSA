#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void insertAtFirst(Node* &head,int data){
    Node *newnode=new Node(data);
    newnode->next = head;
    head = newnode;
}

void print(Node* head){
    if(head == NULL){
        cout<<"Linked List is empty"<<endl;
    }
    Node* temp = head;
    while(temp->next != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int main(){
    Node* head = NULL;
    insertAtFirst(head,10);
    print(head);
}