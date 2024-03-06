#include<iostream>
using namespace std;

// void name(int count){
//     if(count == 0)
//         cout<<"aniket"<<endl;
//     else{
//         cout<<"aniket "<<endl;
//         name(count-1);
//     }
// }

int name (int count){
    if(count == 5)
        return 0;
    else{
        name(count + 1);
        cout<<count<<endl;
        
    }
}

int main(){
    name(0);

}