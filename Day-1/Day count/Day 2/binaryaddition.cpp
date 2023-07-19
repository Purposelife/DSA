#include<iostream>
#include<math.h>

using namespace std;
int main(){
   int n;
   cin>>n;
   int sum=0;
   while(n!=0){
       int rem=n/2;
       sum=sum+rem;
   }
   if(sum==0){
       cout<<1;
   }
   else
        cout<<0;
}