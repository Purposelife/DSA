#include<iostream>
using namespace std;

int findpivot(int arr[],int n){
    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;

    while(start<=end){
        if(arr[mid]>=arr[0]){
            start=mid+1;
        }
        else if(arr[mid]<arr[mid+1] && arr[mid]<arr[mid-1]){
            return arr[mid];
        }
        else{
            end=mid;
        }
        mid=start+(end-start)/2;
    }
    return -1;
}
int main(){
    int arr[5]={8,10,17,1,3};
    int ans=findpivot(arr,5);
    cout<<ans;
}