#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        //for printing 12345    1234    123   12   1
        int col=1;
        while(col<=n-row+1){
            cout<<col<<" ";
            col++;
        }
        //for printing star
        int star=1;
        while(star<=row-1){
            cout<<"* *"<<" ";
            star++;
        }
        //for printing in reverse.
        int patt=n;
        while(patt>=row){
            cout<<patt<<" ";
            patt--;
        }
        cout<<endl;
        row++;
    }
}