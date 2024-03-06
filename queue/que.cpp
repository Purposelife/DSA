#include<iostream>
using namespace std;

class queue{
    int *arr;
    int front,rear;
    int size;

    public:
        queue(int n){
            arr = new int[n];
            front = -1;
            rear = -1;
            size = n;
        }
bool isempty(){
    return front == -1; 
}
bool isfull(){
    return (rear+1)%size == front;
}

void push(int x){
    if(isempty()){
        front=rear=0;
        arr[0]=x;
    }
    else if(isfull()){
        cout<<"Queue Overflow"<<endl;
        return;
    }
    else{
        rear = (rear+1)%size + 1;
        arr[rear] = x; 
    }
    cout<<"pushed"<<x<<endl;
}
void pop(){
    if(isempty()){
        cout<<"Queue underflow"<<endl;
    }
    else{
        if(front==rear){
            front = rear = -1;
        }
        else{
            front=(front+1)%size;
        }
    }
    // cout<<"poped"<<x;
}
int start(){
    if(isempty()){
        cout<<"Queue is empty"<<endl;
        return -1;
    }
    else{
        return arr[front];
    }
}
};


int main(){
    queue q(5);
    q.push(5);
    q.push(10);
    q.push(13);
    q.pop();
    q.push(23);
    q.push(21);
    q.push(89);
}