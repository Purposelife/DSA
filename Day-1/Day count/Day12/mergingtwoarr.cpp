#include<iostream>
using namespace std;
void printans(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n=4;
    int m= 5;
    // cout<<min(m,n);
    int arr[n] = {1,3,5,9};
    int brr[m] = {1,2,3,4,5};
    int crr[m+n];

    int start = 0;
    int end = 0;
int i = 0;
    while(start <= n && end <= m){
        if(arr[start] <= brr[end]){
            crr[i++] = arr[start];
            start++;
            }
        else{
        crr[i++] = brr[end];
        end++;
        }
    }
    while(start < n){
    crr[i++]=arr[start++];
    }
    while(end < m ){
        crr[i++] = brr[end++];
    }
    int x = sizeof(crr)/sizeof(crr[0]);
    printans(crr,m+n);
    cout<<endl;
    int mid = x/2;
    cout<<(crr[mid]+crr[mid+1])/2;
}