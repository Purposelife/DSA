#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int main(){
    vector<int> v;

    v.push_back(3);
    v.push_back(1);
    v.push_back(6);
    v.push_back(11);
    v.push_back(2);
    cout<<"Finding six: "<<binary_search(v.begin(),v.end(),6)<<endl;
    
}
