#include<iostream>
using namespace std;

int findpivot(int arr[],int n){
    int start=0;
    int end=n-1;
    int mid = start+(end-start)/2;
    while(start<end){
        if(arr[mid]>=arr[0]){
            start=mid+1;
        }
        else{
            end=mid;
        }
        mid=start+(end-start)/2;
    }
    return start;
}
int binarysearch(int arr[],int start,int end,int key){
    int mid = start + (end - start)/2;
    while(start<=end){
        if(arr[mid]>key){
            end=mid-1;
        }
        if(arr[mid]==key){
            return mid;
        }
        else{
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
}

int main(){
    int arr[7]={8,9,10,13,15,1,2};
    int n=2;
    int key=13;
    int pivot=findpivot(arr,7);
    if(key>=arr[pivot] && key<=arr[n-1]){
        cout<<binarysearch(arr,pivot,n-1,key);
    }
    else{
        cout<<binarysearch(arr,0,pivot-1,key);
    }
}