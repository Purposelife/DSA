#include<stdio.h>
using namespace std;

int isPossible(int arr[],int k, int mid){
    int cowcount = 1;

    int lastpos =  arr[0];

    for(int i=0;i<7;i++){

        if(arr[i]-lastpos >= mid){

            cowcount++;

            if(cowcount==k){
                
                return true;
            }
            lastpos = arr[i];
        }
    }
    return false;
}

int agressive(int arr[],int k){
    //sort the array;

    int start = 0;
    int maxi = -1;
    for(int i=0; i<=7;i++){
        //we area checking if in the array maximum element;
        maxi=max(maxi,arr[i]);
    }
    int end = maxi;
    int ans = -1;
    int mid = start + (end - start)/2;
    while(start<=end){
        if(isPossible(arr,k,mid)){
            ans = mid;
            start = mid + 1;

        }
        else{
            end = mid - 1;
        }
        mid = start + (end - start) /2;
    }
    return ans;

}