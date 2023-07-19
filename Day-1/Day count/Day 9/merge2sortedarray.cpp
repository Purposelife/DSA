#include<iostream>
#include<vector>
using namespace std;

void merge(int arr1[], int n, int arr2[], int m,int arr3[]){
    int i =0 ;
    int j= 0 ;
    int k=0;
    while(i<n && j<m){
    if(arr1[i]<arr2[j]){
        arr3[k++]=arr1[i++];
    }
    else{
        arr3[k++]=arr2[j++];
    }
}
    while(i<n){
        arr3[k++]=arr1[i++];
    }
    while(j<m){
        arr3[k++]=arr2[j++];
    }

}
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr1[6]={1,3,6,9,10};
    int arr2[4]={4,5,8,11};

    int brr[10]={0};
    merge(arr1,6,arr2,4,brr);
    print(brr,10);
    return 0;
}