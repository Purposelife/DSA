#include<iostream>
#include<bits/stdc++.h>
// #include<pair.h>
using namespace std;

int main()
{
    // pair<string,int>p;
    //1st method;
    // p = make_pair("Aniket",40);
    // cout<<p.first<<" "<<p.second<<endl;

    //creating for name age weight
        //name          //age and weight
    pair<string, pair<int,int>>p;

    p.first = "rohit";
    p.second.first = 12;
    p.second.second = 13;

    

    cout<<p.first << " " <<p.second.first<<" "<<p.second.second<<endl;

}