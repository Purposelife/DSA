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

void Insert(Node* &head,int d){
    //create a new node
    Node* temp = new Node(d);
    temp->next = head;
    head=temp;
}

void insertAtTail(Node* &tail, int d) {
     // new node create
    Node* temp = new Node(d);
    tail -> next = temp;
    tail  = temp;
}

void last(Node* &head,int d){
    Node* temp = head;
    Node* temp1 = new Node(d);
    while(temp->next!=NULL){
        temp1 -> next = NULL;
        temp = temp1;

    }
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
void insertatPosition(Node* &head,int poisition , int d){
    Node* temp = head;
    int cnt = 1;

    while(cnt < poisition-1){
        temp= temp ->next;
        cnt++;
    }
//creating new  node

// Node* nodetoinsert = new Node(d);
// nodetoinsert->next = temp -> next;
// temp->next = nodetoinsert;

// void delete(int position, Node* &head){
//     int count = 1;


// }

}
int main(){
    Node* node1 = new Node(10);
    cout<<node1->data<<endl;
    cout<<node1->next<<endl;

    Node* head = node1;
    Node* tail = node1;
    Insert(head,12);
    Insert(head,30);
    last(head,45);
    insertAtTail(tail, 12);
    print(head);
}
