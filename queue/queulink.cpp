#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int value){
        data = value;
        next = NULL;
    }
};

class queue{
    int *front;
    int *rear;
    public:
    queue()
        front = rear = NULL;
};
bool isempty(){
    return front == rear;
}
void push(int x){
    if(isempty()){
        front = new node(x);
        rear = new node(x);
        return;
    }
    else{
        rear->next = new node(x);
        rear = rear-> next;
    }
}
void pop(){
    if(isempty()){
        cout<<"Queue underflow"<<endl;
        return;
    }
    else{
        node *temp = front;
        front = front->next;
        delete temp;
    }
}

int start(){
    if(isempty()){
        cout<<"Empty hai bhai";
        return -1;
    }
    else{
        return front->data;
    }
}