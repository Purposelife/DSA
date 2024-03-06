#include<iostream>
using namespace std;

void subset(int arr[], int index , int n ,int sum){
    if(index == n){
        cout<<sum<<endl;
        return;
    }
    //exclude
    subset(arr,index+1,n,sum);
    //include 
    subset(arr,index+1,n,sum+arr[index]);

}

int main(){
    int arr[] = {3,4,5};
    subset(arr,0,3,0);
}


//target sum


// #include<iostream>
// using namespace std;

// bool targetsum(int arr[], int index , int n ,int target){
//     if(target == 0){
//         return 1;
//     }
//     if( index == n || target < 0 ){
//         return 0;
//     }
//     //left                                  //right
//     return targetsum(arr,index+1,n,target) || targetsum(arr,index+1,n,target-arr[index]);
// }

// int main(){
//     int arr[] = {3,4,5,6};
//     targetsum(arr,0,4,0);
// }