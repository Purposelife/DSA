#include<iostream>
using namespace std;

void increasing(int start,string out,int n){
    if(n==0){
        cout<<out<<" ";
        return;
    }
    for(int i = start; i <=9 ;i++){
        string str = out + to_string(i);
        increasing(i+1,str,n-1); 
    }
}

int main(){

    int n =3;
    increasing(0," ",n);
    return 0;
}