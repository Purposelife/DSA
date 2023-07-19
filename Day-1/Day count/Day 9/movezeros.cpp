#include<iostream>
using namespace std;

void swap(int a, int b){
    int temp= a;
    a=b;
    b=temp;
}
void move(int arr[],int n){
    int i=0;
    int j=n-1;
    while(i<=j){
        if(arr[i]==0 && arr[j]!=0){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
        if(arr[i] !=0 && arr[j]!=0 ){
            i++;
        }
        else{
            j--;
        }
        
    }
}

void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[7] = {1,2,3,0,0,2,3};
    move(arr,7);
    print(arr,7);
}