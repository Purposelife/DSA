#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    map<int, int> m;
    m.insert(make_pair(10,20));
    m.insert(make_pair(30,40));
    m.insert(make_pair(40,50));

    for(auto i : m){
        cout<<m.first() <<endl;
    }

}