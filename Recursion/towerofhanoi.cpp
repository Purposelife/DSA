#include<iostream>
using namespace std;

void TOH(int n, int src , int helper, int dest){
    if(n == 1){
        cout<<"move disk "<< n <<src << " -> " <<dest<<endl; 
    }

    TOH(n-1,src,dest,helper);
    cout<<"move disk "<< n <<src << " -> " <<dest<<endl; 
    TOH(n-1,helper,src,dest);
}

int main(){
    int n = 3;
    int src = 1;
    int dest = 3;
    int helper = 2;

    TOH(n,src,dest,helper);

}