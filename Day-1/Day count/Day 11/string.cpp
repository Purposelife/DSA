#include<iostream>
#include<string>
#include<cctype>
using namespace std;
char makelower(char ch){
    if(ch>='a' && ch<='z'){
        return ch;
    }
    else{
        return ch+32;
    }
}
void reverse(char name[], int n){
    int start=0;
    int end = n-1;
    while(start<end){
        swap(name[start++],name[end--]);
    }
}

int main(){
    char name[50];
    cout<<"Enter your name: "<<endl;
    cin>>name;
    cout<<"Name is: " <<name<<endl;
    int count =0;
    for(int i=0 ; name[i] !='\0';i++){
        count++;
    }
    cout<<count<<endl;
    reverse(name,count);
    cout<<name<<endl;
    cout<<makelower('A')<<endl;
    cout<<makelower('c')<<endl;
    
    return 0;
}