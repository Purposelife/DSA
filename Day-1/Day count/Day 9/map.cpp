#include<iostream>
#include<map>
using namespace std;

int main(){
    map<int,string> n;
    n[1]="babar";
    n[2]="aniket";
    n[3]="shah";

    for(auto i:n){
        cout<<i.first<<endl;
    }
}