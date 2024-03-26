#include <stdio.h>
#include<queue>
#include<stack>
using namespace std;


//VVIMP questions........


void push(int element){
    q1.push(element);
    for(int i =0;i<q1.size();i++){
        q1.push(q1.front());
        q1.pop();
    }
}

void pop(){
    if(q1.empty()){
        return -1;
    }
    else{
        int e = q1.front();
        q1.pop();
        return e;
    }
}