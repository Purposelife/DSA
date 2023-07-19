#include<iostream>
using namespace std;

void rotate(int arr[], int n , int m){
    int i=1;
    while(i<=m){
        int temp=arr[n-1];
        for(int j=0;j<n;j++){
            arr[j+1]=arr[j];
        }
        arr[0]=temp;
    }
}

void print(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[6]={1,2,3,4,5,6};
    rotate (arr,6,2);
    print(arr,6);
}