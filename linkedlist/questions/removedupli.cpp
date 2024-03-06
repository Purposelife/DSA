#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};

void print(Node *&head)
{
    if (head == NULL)
    {
        cout << "linked list is empty" << endl;
    }
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void Insert(Node *&tail, int data)
{
    Node *newnode = new Node(data);
    newnode->prev = NULL;
    tail->next = newnode;
    tail = newnode;
}

void removedupli(Node *&head)
{
    Node *current = head;
    Node *forward = head->next;
    while (forward != NULL)
    {
        if (current->data == forward->data)
        {
            cout << current->data << " ";
            forward = forward->next;
        }
        else
        {
            cout << current->data << " ";
            forward = current;
            forward = forward->next;
        }
    }
}

int main()
{
    Node *newnode = new Node(1);
    Node *head = newnode;
    Node *tail = newnode;
    Insert(tail, 2);
    Insert(tail, 3);
    Insert(tail, 4);
    Insert(tail, 5);
    print(head);
    removedupli(head);
}