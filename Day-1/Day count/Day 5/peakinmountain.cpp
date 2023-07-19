#include<iostream>
using namespace std;

int findpeak(int arr[],int n){
    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(arr[mid] > arr[mid+1] && arr[mid] > arr[mid-1]){
            return mid;
        }
        else if(arr[mid] < arr[mid+1]){
            start = mid + 1;
        }
        else{
            end=mid-1;
        }
    }
}

int main(){
    int arr[11]={0,1,2,3,4,5,6,7,4,2,1};
    int ans=findpeak(arr,11);
    cout<<ans;
}