#include<iostream>
using namespace std;

int max(int arr[],int n){
    int max=arr[0];
    for(int i=0;i<=n;i++){
        if(arr[i]>max)
        max=arr[i];
    }
    return max;
}
int min(int arr[],int n){
    int min=arr[0];
    for(int i=0;i<=n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}
int main(){
    int array[10]={1,-2,3,4,24,35,231,31,43,34};
    int size=sizeof(array)/sizeof(int);
    cout<<"Maximum is: "<<max(array,size)<<endl;
    cout<<"Minimum is: "<<min(array,size);
}