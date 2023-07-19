#include<iostream>
using namespace std;
int binary(int arr[],int n,int key){
    int start = 0;
    int end = n-1;

    int mid = start + (end - start)/2;

    while(start <= end){
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]<key){
            start = mid+1;
        }
        else
            end = mid - 1;

        mid = start + (end -  start)/2;
    }

    return -1;
}

int main(){
    int arr[12] = {12,23,43,56,76,88,98,123,234,345,456,678};
    int n = 12;
    int result = binary(arr,12,345);
    cout<<"Found at: "<<result;

}
