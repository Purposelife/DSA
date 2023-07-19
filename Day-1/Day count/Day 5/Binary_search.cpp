#include<iostream>
using namespace std;

int binary(int arr[],int n,int key){

    int start=0;
    int end=n-1;
    
    int mid=start + (end-start)/2;
    
    while(start<=end){

        if(arr[mid]==key){
            return mid;
        }

        if(key>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start + (end-start)/2;
    }
    return -1;
}


int main(){
   int even[6] = {1,2,3,4,5};
    int evenIndex = binary(even, 5,2);

    cout << " Index of 2 is " << evenIndex << endl;
    return 0;
}