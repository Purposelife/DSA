#include<iostream>
using namespace std;

int suma (int arr[],int start,int n){
    int sum=0;
    for(int i=start;i<n;i++){
        sum=sum+arr[i];
    }
    return sum;
}
int pivot(int arr[],int n)
{
    int start=0;
    int end=n-1;
    // int count = 0;
    int mid = start + (end-start)/2;
    while(start<=end){
        int leftsum=suma(arr,0,mid);
        // cout<<"First "<<++count<<endl;
        // cout<<leftsum<<endl;
        int rightsum=suma(arr,mid,n-1);
        // cout<<"Second "<<count<<endl;
        // cout<<rightsum<<endl;
        if(leftsum==rightsum){
            return mid;
        }
        else if(leftsum<rightsum){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
       mid = start + (end-start)/2;
    }
    return -1;
}
int main(){
    int arr[6]={1,7,3,6,5,6};
    int ans=pivot(arr,6);
    cout<<ans;
}
    