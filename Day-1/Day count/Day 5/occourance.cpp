#include<iostream>
using namespace std;
int first(int arr[],int n,int key){
    int start=0;
    int end=n-1;
    int flag=-1;
    int mid = start + (end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
            flag=mid;
            end=mid-1;
        }
        else if(arr[mid]<key){
            start=mid+1;
            
        }
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
}
int last(int arr[],int n,int key){
    int start=0;
    int end=n-1;
    int flag=-1;
    int mid = start + (end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
            flag=mid;
            start=mid+1;
        }
        else if(arr[mid]<key){
            start=mid+1;
            
        }
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
}

int main(){
    int arr[10]={0,1,1,1,1,2,3,3,4,4};
    int firstocc=first(arr,10,1);
    int lastocc=last(arr,10,1);
    cout<<firstocc<<endl;
    cout<<lastocc;
}