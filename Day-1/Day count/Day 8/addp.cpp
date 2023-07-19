#include<iostream>
using namespace std;

int binary(int arr[], int start, int end){
    int key;
    while(start<=end){
        int mid = start + (end - start) / 2;
        if(arr[mid]==key){
            return mid;
        }
        if(arr[mid]>key){
            end = mid-1;
        }
        else{
            start = mid + 1; 
        }
    }
    return -1;
}

int duplicate(int arr[],int n){
    int start = 0;
    int end = n - 1;
    while(start <= end){
        int mid = start + (end - start) / 2;
        
        
    }
}




int main(){
    int arr [5] = {1,3,4,2,2};
    cout<<duplicate(arr,5);
    cout<<2-3;
}