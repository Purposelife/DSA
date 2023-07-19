#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<string> s;

    s.push("Aniket");
    s.push("Shah");
    s.push("Anusha");
    cout<<"top element "<<s.top()<<endl;

    s.pop();
    cout<<"top element "<<s.top()<<endl;
}