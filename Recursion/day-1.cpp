#include<iostream>
using namespace std;

// void printpat(int n, int m, bool flag){
//     cout<<m<<" ";

//     if(flag == false && n == m){
//         return;
//     }
//     if(flag){
//         if(m-5>0){
//             printpat(n,m-5,true);
//         }
//         else{
//             printpat(n,m+5,false);
//         }
//     }
//     else{
//         printpat(n,m+5,false);
//     }
// }

void print(int m){
    if(m>0){
        cout<< m <<'\n';
        print(m-5);
    }
    cout<<m<<'\n';
    // print(m+5);
}

int main(){

    print(25);
    // printpat(16,16,true);

    return 0;
}