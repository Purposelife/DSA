#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    public:
    Node(int data1,Node* next1){
        data = data1;
        next = next1;
    }
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

void print(Node* head){
    Node* current = head;
    while(current != NULL){
        cout<<current->data<<" ";
        current = current->next;
    }
    cout<<endl;
}

Node* InsertFirst(int value,Node* head){
    Node* newnode = new Node(value);
    newnode->next = head;
    head = newnode;
    return newnode;
}

Node* InsertLast(int value,Node* head){
    Node* newnode = new Node(value);
    Node* current = head;
    while(current->next != NULL){
        current = current->next;
    }
    current->next = newnode;
    newnode->next = NULL;
    return head;
}

Node* DeleteFirst(Node* head){
    Node* current = head;
    head = head->next;
    delete current;
    return head;
}
int main(){
    // vector<int> arr ={2,5,6,7};
    // Node* y = new Node(arr[0]);
    // cout<<y<<'\n';
    // cout<<y->data<<'\n';

    // Node x=Node(arr[0]);
    // Node* y= &x;
    // cout<<y<<'\n';
    Node* head = NULL;
    head = InsertFirst(12,head);
    head = InsertFirst(13,head);
    head = InsertFirst(14,head);
    head = InsertLast(14,head);
    head = InsertLast(20,head);
    head = DeleteFirst(head);
    print(head);
}