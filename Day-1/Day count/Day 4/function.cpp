#include<iostream>
using namespace std;

int compute(int x){
    int j=1;
    for(int i=2;i<=x;i++){
        j=j*i;
    }
    return j;
}

int main(){
    int x,y;
    cin>>x;
    cin>>y;
    int xfact=compute(x);
    int yfact=compute(y);
    int xyfact=compute(x-y);
    int ans=xfact/(yfact*xyfact);
    cout<<ans;
    return 0;
}