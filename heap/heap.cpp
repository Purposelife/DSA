#include<iostream>
using namespace std;

class Maxheap{

    int *arr;
    int size;  //size of heap
    int totalsize;   //size of array

    public:
    
    Maxheap(int n){
        arr = new int[n];
        size = 0;
        totalsize = n;
    }

    //insertion in heap;
    void insert(int value){
        if(size == totalsize)
        {
            cout<<"heap overflow";
            return;
        }

        arr[size] = value;
        int index = size;
        size++;

        // ? Compare it with parents

        while(index>0 && arr[(index-1)/2] < arr[index]){
            swap(arr[index], arr[(index-1)/2]);
            //updating index again to check with the next  parent node.
            index = (index - 1) / 2;
        };
        cout<<arr[index]<<" Inserted in the heap"<<endl;
    }

    void print(){
        for(int i = 0 ; i < size ;i++){
            cout<<arr[i] <<" ";
        }
    }
};



int main(){
    Maxheap h1(6);

    h1.insert(45);
    h1.insert(4);
    h1.insert(34);
    h1.insert(90);
    h1.insert(23);

    h1.print();
}