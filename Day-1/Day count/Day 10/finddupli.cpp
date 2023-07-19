#include<iostream>
using namespace std;

int binarysearch(int arr[],int start,int end,int key,int n){
    start=0;
    end =    n-1;
    while(start<=end){
        int mid = start + (end -start)/2;
        if(key == arr[mid]){
            return mid;
        }
        if(arr[mid] > key){
            end=mid-1;
        }
        else
            start=mid+1;
        
        // mid= start+ (end-start)/2;
    }
    return -1;
}

// int finddupli(int arr[],int n){
//     int start = 0;
//     int end = n;
//     while(start<=end){
//         int mid = start + (end - start)/2;
//         if(arr)
//     }
// }
int finddupli(int arr[],int n){
    int i=0;
    
    while(i<n-1){
    if(arr[i] == binarysearch(arr,i+1,n-1,arr[i],n-i)){
        return arr[i];
    }
    else{
        i++;
    }
    }
}

int main(){
    int arr[7]={1 ,3 ,4 ,2 ,2};
    cout<<finddupli(arr,5);
    return 0;
}