#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    //creating constructor:
    Node(int data){
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
    ~Node(){
        int value = this-> data;
        if(next != NULL){
            delete next;
            next = NULL;
        }
        cout<<"memory free for node with data";
    }
};
void insertAtFirst(Node* &head,int data){
    Node* newnode = new Node(data);
    if(head == NULL){
        // Node* newnode = new Node(data);
        head = newnode;
    }
    else{
    // Node* newnode = new Node(data);
    newnode->next = head;
    head->prev = newnode;
    head = newnode;
    }
    
}

void insertAtMiddle(Node* &head, int data, int position){
    Node* newnode = new Node(data);
    Node* temp = head;
    if(position==0){
        insertAtFirst(head,data);
    }
    int count = 1;
    while(count < position){
        temp = temp -> next;
        count++;
    }
    temp -> next = newnode;
    newnode->next = temp->next;
    newnode -> prev = temp;
    temp->next->prev = newnode;
}

void print(Node* &head) {

    if(head == NULL) {
        cout << "List is empty "<< endl;
        return ;
    }
    Node* temp = head;

    while(temp != NULL ) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

void InsertAtLast(Node* &tail,int data){
    Node *temp = new Node(data);
    temp -> prev = tail;
    tail -> next = temp;
    tail = temp;
}

//Deletion in DLL;

void DeleteFirst(Node* &head){
    Node* temp = head;
    temp->next->prev = NULL;
    head=temp->next;
    temp->next = NULL;
    delete temp;
}
void delete

int main(){
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    insertAtFirst(head,12);
    insertAtMiddle(head,44,2);
    InsertAtLast(tail,23);
    print(head);
    
}