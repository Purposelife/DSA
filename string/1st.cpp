#include<iostream>
// #include<string>
using namespace std;

int main(){
    // string str;
    // cin>>str;
    // //declearing string
    // string str1(5,'n');
    // cout<<str1;

    // function of string in c++;
    string s1 = "fam";
    string s2 = "ily";
    s1.append(s2);
    s2.append(s1);
    cout<<s1<<endl;
    cout<<s2<<endl;
    s1 = s1+ s2;
    cout<<s1<<endl;

    //acessing is similar like in array;

    cout<<s1[2]<<endl; 
    cout<<s1.size();

}