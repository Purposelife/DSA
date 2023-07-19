#include<iostream>
using namespace std;

void update2(int &n){
    n++;
}

void update(int n){
    n++;
}
int main(){
    //Creating a refrence variable

    // int i = 5;
    // int &j = i;
    // cout<<j<<endl;
    //this is pass by value;
    int n = 5;
    cout<<"Before: "<<n<<endl;
    update(n);
    cout<<"After : "<<n<<endl;
    update2(n);
    cout<<"After 2: "<<n<<endl;
}