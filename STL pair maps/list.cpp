#include<bits/stdc++.h>
#include<iostream>
using namespace std;
//push_back
//push_front
//pop_back
//pop_front
//isempty

int main(){
    list<int>l;

    l.push_back(30);
    l.push_back(40);
    l.push_front(40);

    // cout<<l.front() << " "<<l.back;


    //itereator

    for(auto it : l){
        cout<<it<<" ";
    }
}