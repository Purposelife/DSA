#include<iostream>
using namespace std;

long sum(long number){
    if(number == 0){
        return 0;
    }
    return (number % 10) + sum(number/10);
}

int main(){

    cout<<sum(1235245)<<endl;
    return 0;
}