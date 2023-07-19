#include<iostream>
using namespace std;

int binary(int arr[] ,int n, int key){
    int start = 0;
    int end = n - 1;
    
    while(start<=end){
        
        int mid = start + (end - start) / 2;
        
        if(arr[mid]==key){
            return mid;
        }
        if(arr[mid]>key){
            end = mid-1;
        }
        else{
            start = mid + 1; 
        }
    }
    return -1;
}
// int binary(int arr[],int n,int key){

//     int start=0;
//     int end=n-1;
    
//     int mid=start + (end-start)/2;
    
//     while(start<=end){

//         if(arr[mid]==key){
//             return mid;
//         }

//         if(key>arr[mid]){
//             start=mid+1;
//         }
//         else{
//             end=mid-1;
//         }
//         mid=start + (end-start)/2;
//     }
//     return -1;
// }

int main(){
    int arr [5] = {1,2,3,4,5};
    cout<<binary(arr,5,4);
}
