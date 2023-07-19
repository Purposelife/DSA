#include<iostream>
#include<math.h>

using namespace std;
int main(){
    while(true){
    int n;
    cin>>n;
    
    int binary=0;
    int rem;
    int i=1;

    while(n>0){
        rem=n%2;
        n=n/2;
        binary=binary+rem*i;
        i=i*10;
    }
    cout<<binary<<endl;
    }
}