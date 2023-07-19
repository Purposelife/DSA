#include<iostream>
using namespace std;

int find(int arr[],int n,int key){
    int start=0;
    int end=n-1;
    int mid=start + ( end - start) / 2;
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key && arr[mid]<arr[0]){
            
            end=mid;
        }
        else{
            start=mid+1;
        }
        mid = start + ( end - start) / 2;
    } 
}
int main(){
    int arr[5]={7,9,1,2,3};
    int key=9;
    int ans=find(arr,5,key);
    cout<<ans;
}