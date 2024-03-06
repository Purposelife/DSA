#include<iostream>
#include<vector>
using namespace std;

// int ans(int number){
//     if(number==1)
//         return 1;
//     else{
//         return number * ans(number-1);
//     }
// }
void reverseArr(int arr[], int size)
{
 for(int i=0, j=size-1; i<size/2; i++, j--)
 {
 swap(arr[i], arr[j]);
 }
}
void printarr(int arr[],int size){
    for(int i = 0 ; i < size;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    // cout<<ans(5);
    int arr[] = {1,2,34,5,6,7,9};
    int size = sizeof(arr)/sizeof(arr[0]);
    printarr(arr,size);
    cout<<endl;
    reverseArr(arr,size);
    printarr(arr,size);
}