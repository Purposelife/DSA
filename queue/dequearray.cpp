#include<iostream>
using namespace std;

class deque{
    int front , rear , size;
    int *arr;
    public:
    deque(int n){
        size = n;
        arr = new int[n];
        front = rear = -1;
    }
    bool isempty(){
        return front == -1;
    }

    bool isfull(){
        return (rear + 1)%size == front; 
    }

    void pushfront(int x){
        if(isempty()){
            front = rear = 0;
            arr[0] = x;
            return;
        }
        else if(isfull()){
            return;
        }
        else{
            front = (front - 1 + size) % size; 
            arr[front] = x;
            return;
        }
    }

     void pushback(int x){
        if(isempty()){
            front = rear = 0;
            arr[0] = x;
        }
        else if(isfull()){
            return;
        }
        else{
            rear = (rear+1)%size;
            arr[rear] = x;
            return;
        }
    }
    void popfornt(){
        if(isempty()){
            return;
        }
        else{
            if(front == rear){
                front = rear = -1;
            }
            else{
                front = (front+1)%size;
            }
        }
    }

    void popback(){
        if(isempty()){
            return;
        }
        else{
            if(front == rear){
                front = rear = -1;
            }
            else{
                rear = (rear-1+size) % size;
            }
        }
    }
    int start(){
        if(isempty()){
            return -1;
        }
        else{
            return arr[front];
        }
    }

    int end(){
        if(isempty()){
            return -1;
        }
        else{
            return arr[rear];
        }
    }
};

int main(){
    deque d(5);
    d.pushback(10);
    d.pushback(11);
    d.pushback(10);
    d.pushfront(1010); 
    cout<<d.start();
}