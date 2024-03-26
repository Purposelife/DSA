#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int static t[1001][1001];

int MCM(int arr[] , int i , int j){
    if(i>=j)
        return 0;

    if(t[i][j] != -1)
        return;

    int mini = INT_MAX;

    for(int k = i ; k <= j ;k++){
        int tempsum = arr[i-1]*arr[j]*arr[k]+MCM(arr,i,k)+MCM(arr,k+1,j);

        mini = min(mini, tempsum);
    }
    return t[i][j] = mini;
}


int main(){
    int arr[5] = {40,10,30,10,20};
    memset(t, -1, sizeof t);
    cout<<"Minimum: "<<MCM(arr,1,4)<<endl;
}