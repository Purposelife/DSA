#include<iostream>
using namespace std;

int main(){
    cout<<"Enter a,b";
    int a,b;
    cin>>a>>b;
    char op;
    cin>>op;

    switch(op){
        case '+':
        cout<<a+b;
        break;

        case '-':
        cout<<a-b;
        break;

        case '*':
        cout<<a*b;
        break;

        case '/':
        cout<<a/b;
        break;

        default:
        cout<<"please enter correct operator";
    }

}