#include<iostream>
using namespace std;

int suma(int arr[]){
    int sum=0;
    for(int i=0 ;i<arr.size() ;i++){
        sum=sum+arr[i];
    }
    return sum;
}

int main(){
    int arr[]={3,3,6,5,-2,2,5,1,-9,4};
    int ans=suma(arr);
    cout<<ans<<endl;
}