#include<iostream>
#include<queue>
using namespace std;

/// its an implenetation of enque and deque in the queue. 
void enque(int data){

    //chceking if the queue is empty or not
    if(rear == arr.size()){
        return;
    }
    else{
        //if not empty we are putting the data int the rear and moving rear foeward;
        arr[rear] = data;
        rear++;
    }
}

void dequeue(){

    //to deque me must need any emelent to remove any element if if front and rear are in same place so we do is return -1;
    if(front == rear){
        return -1;
    }
    else{
        //if not if the array contains any number of the data then what we do id we store the front in the a defined integer variable and keep poping untill we reach to the frint == rear if they suceed then keep rear and front both at the first positions.
        int result = arr[front];
        front++;
        if(rear==front){
            rear = 0;
            front = 0;
        }
        return result;
    }
}

