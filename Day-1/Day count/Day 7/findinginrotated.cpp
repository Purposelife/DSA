#include<iostream>
using namespace std;

int findpivot(int arr[], int n){
    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;

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

int binary(int arr[],int start,int end,int key){
    int size=sizeof(arr)/sizeof(arr[0]);
    start=0;
    end=size-1;
    int mid= start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return size;
}


int findelement(int arr[],int key,int n){
    int part=findpivot(arr,n);
    if(arr[part]<key){
        binary(arr,part+1,n,key);
    }
    else if(arr[part]==key){
        return part;
    }
    else{
        binary(arr,part+1,n,key);
    }
}

int main(){
    int arr[9]={12,32,1,2,3,4,5,6,7};
    int key=12;
    int ans=findelement(arr,key,9);
    cout<<ans;
}