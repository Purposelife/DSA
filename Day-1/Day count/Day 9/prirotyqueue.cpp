#include<iostream>
#include<queue>
using namespace std;

int main(){

    //Max heap
    priority_queue<int> maxi;

    //min heap
    priority_queue<int ,vector<int>,greater<int>> mini;

    //putting datas.

    maxi.push(0);
    maxi.push(1);
    maxi.push(8);
    maxi.push(2);

    int size=maxi.size();

    for(int i=0;i<size;i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }
    cout<<endl;
    mini.push(0);
    mini.push(1);
    mini.push(8);
    mini.push(2);

    int size1=mini.size();

    for(int i=0;i<size;i++){
        cout<<mini.top()<<" ";
        mini.pop();
    }
}