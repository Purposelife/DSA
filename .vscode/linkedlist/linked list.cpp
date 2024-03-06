#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};

void insert(Node* &head,int data){
    Node* newnode= new Node(data);
    newnode -> next = head;
    head = newnode;
}

void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void insertatend(Node* &tail,int data){
    Node* newnode = new Node(data);
    tail->next = newnode;
    tail = tail->next;
}
int main(){
    Node* node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;
    insert(head,12);
    insert(head,35);
    insert(head,34);
    insert(head,56);
    insertatend(tail,23);
    print(head);

   return 0;
}
