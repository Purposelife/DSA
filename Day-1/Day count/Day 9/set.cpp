#include<iostream>
#include<set>
using namespace std;

int main(){
    set <int> s;

    s.insert(5);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(2);
    s.insert(1);
    for(auto i : s){
        cout<<i<<" ";
    }
    cout<<endl;

    s.erase(s.begin());

    cout<<"count is"<<s.count(-5)<<endl;
}