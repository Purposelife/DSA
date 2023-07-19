//swap alternatives.

#include<iostream>
using namespace std;
void print(int arr[],int n){
    for(int i=0;i<=n;i++){
        cout<<arr[i]<<" ";
    }
}
void swapalter(int arr[],int n){
    int start=0;
    int end=n;
    while(start<end){
        swap(arr[start],arr[start+1]);
        start+=2;
    }
}
int main(){
    int arr[12]={1,2,3,4,5,6,7,8,9,01,202};
    swapalter(arr,10);
    print(arr,10);
}