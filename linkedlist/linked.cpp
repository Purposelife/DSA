#include<iostream>
using namespace std;

class Node {
public:
    Node *next;
    int data;
    
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

int insertAtFirst(Node* &head, int data) {
    Node *newnode = new Node(data);
    if (head == NULL) {
        head = newnode;
    }
    else {
        newnode->next = head;
        head = newnode;
    }
    return 0; // Return a value, as the function is declared as int
}

void print(Node* &head) {
    if (head == NULL) {
        cout << "List is empty" << endl;
        return;
    }
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout<<"NULL";
    cout<<endl;
}

Node* reverse(Node* &head){
    Node* prev = NULL;
    Node* current = head;
    Node* nextnode;

    while(current!=NULL){
        nextnode = current->next;
        current -> next = prev;
        prev = current;
        current = nextnode;
    }
    return prev;
}

int main() {
    Node* head = new Node(10); 
    insertAtFirst(head, 12);
    insertAtFirst(head, 13);
    insertAtFirst(head, 23);
    print(head);

    Node* newhead = reverse(head);

    print(newhead);
    
    return 0;
}
