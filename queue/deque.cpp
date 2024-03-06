#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;
    Node(int data){
        data = data;
        next = NULL;
        prev = NULL;
    }
};

class deque{
    Node  *front,*rear;
    public:
    deque(){
        front = rear = NULL;
    }
    void pushfront(int x){
        if(front == NULL){
            front = rear = new Node(x);
            return;
        }
        else{
            Node* temp = new Node(x);
            temp->next = front;
            front -> prev = temp;
            front = temp;
            return;
        }
    }

    void push_back(int x){
        if(front == NULL){
            front = rear = new Node(x);
            return;
        }
        else{
            Node* temp = new Node(x);
            rear->next = temp;
            temp->prev = rear;
            rear = temp;
            return;
        }
    }

    void popfornt(){
        if(front == NULL){
            return;
        }
        else{
            Node* temp = front;
            front = front->next;
            delete temp;
            if(front){
                front->prev = NULL;
            }
            else{
                rear = NULL;
            }
        }
    }

    void popback(){
        if(front == NULL){
            return;
        }
        else{
            Node* temp = rear;
            rear = rear -> prev;
            delete temp;
            if(rear){
                rear->next = NULL;
            }
            else{
                front = NULL;
            }
        }
    }


    int start(){
        if(front == NULL){
            return -1;
        }
        else{
            return front->data;
        }
    }


    int end(){
        if(front == NULL){
            return -1;
        }
        else{
            return rear->data;
        }
    }
};

int main(){
    deque d;
    d.push_back(5);
    d.pushfront(10);
    d.pushfront(12);
    cout<<d.start()<<endl;
}