#include<iostream>
using namespace std;

int main(){
    int arr[5]={1};
    int start=0;
    int end=sizeof(arr)/sizeof(arr[0]);
    if(arr[end]!=arr[end-1]){
        cout<<arr[end];
    }
    if(end==1){
        cout<<arr[0];
    }
}