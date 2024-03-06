#include<iostream>
#include<stack>
using namespace std;


class stack{
    //properties.
    
};
int main(){
    stack<int> s;

    //pusing into stack
    s.push(2);
    s.push(3);
    //poping from the stack
    s.pop();

    cout<<s.top()<<endl;

    if(s.empty()){
        cout<<"Stacks is empty"<<endl;
    }
    else{
        cout<<"Stacks is not empty"<<endl;
    }


    //stacks implementations.



}