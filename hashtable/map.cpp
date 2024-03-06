#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main(){

    unordered_map<string,int> m;
    //insert elements in the map;
    pair<string,int> p = make_pair("Aniket",4);
    m.insert(p);
    m["mera"] = 3;

    //searching

    cout<<m["mera"]<<endl;
    cout<<m["Aniket"]<<endl;

    //check size
    cout<<m.size()<<endl;

    //tocheck presence;
    cout<<m.count("Aniket")<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    return 0;
}