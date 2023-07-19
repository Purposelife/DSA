#include<iostream>
using namespace std;

bool isprime(int n){
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int start;
    int end;
    cin>>start>>end;
    for(int i=start;i<=end;i++){
        if(isprime(i))
            cout<<i<<" ";
    }
}