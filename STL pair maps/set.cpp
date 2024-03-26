#include<bits/stdc++.h>
using namespace std;

int main(){
    set<int>s;

    //if we want in descending order then we use is
    //set<int,greatee<int>>s;
    //insert
    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(40);
    s.insert(50);

    for(auto it : s)
        cout<<it<<" ";


    //find
    if(s.find(40)!=s.end())
    cout<<"present";
    else
    cout<<"absent"


    //count
    s.count(40);


}