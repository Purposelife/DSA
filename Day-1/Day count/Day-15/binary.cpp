#include<iostream>
using namespace std;
int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int key = 5;
    int start = 0;
    int end = 10;
    while(start<end){
        int mid = start + (end - start)/2;
        if(arr[mid]==key){
            cout<<"Key found at: "<<mid;
        }
        else if(arr[mid]<key){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }

}