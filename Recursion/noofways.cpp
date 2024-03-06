#include<iostream>
#include<math.h>
using namespace std;

int countno(int x,int n,int num){
    int val = (x - pow(num,n));
    if(val == 0){
        return 1;
    }
    if(val<0){
        return 0;
    }

    return countno(val,n,num+1)+ countno(x,n,num+1);
}

int countways(int x , int n){
    return countno(x,n,1);
}

int main(){
    int x = 100,  n = 2;
    cout<<countways(x,n);
    return 0;
}