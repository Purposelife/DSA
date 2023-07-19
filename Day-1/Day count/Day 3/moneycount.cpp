#include<iostream>
using namespace std;

int main(){
    int amount;
    cin>>amount;
    
    int n100,n50,n20,n1;
    n100=n50=n20=n1=0;

    switch(amount>=100){
        case 1:
        int n100=amount/100;
        amount=amount-n100*100;
        break;
    }
    switch(amount>=50){
        case 1:
        int n50=amount/50;
        amount=amount-n50*50;
        break;
    }
    switch(amount>=20){
        case 1:
        int n20=amount/20;
        amount=amount-n20*20;
        break;
    }
    switch(amount>=1){
        case 1:
        int n1=amount/1;
        amount=amount-1*1;
        break;
    }

    cout<<"100: "<<n100<<endl;
    cout<<"50: "<<n50<<endl;
    cout<<"20: "<<n20<<endl;
    cout<<"1: "<<n1<<endl;
}