#include<iostream>
using namespace std;

int find(int n){
    int start=0;
    int end=n;
    int mid = start+ (end-start)/2;
    int ans;
    while(start<=end){
        if(mid*mid>n){
            end=mid-1;
        }
        else if(mid*mid<n){
            ans=mid;
            start=mid+1;
        }
        else{
            return mid;
        }
        mid=start + (end - start)/2; 
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<find(n);
}