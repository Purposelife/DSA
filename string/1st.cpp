#include<iostream>
// #include<string>
#include<algorithm>
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
    cout<<s1.size()<<endl;
    string s = s1.substr(6,4);
    cout<<s<<endl;

    string s3 = "989";
    // int x = stoi(s3);
    // cout<<x+4;

    int x = 987;
    cout<<to_string(x)+"34"<<endl;

    string s4 = "asdnfkasjdngja";
    for(int i = 0 ; i <= s4.length(); i++){
        if(s4[i]>='a' && s4[i] <= 'z' ){
            s4[i] -= 32;
        }
    }

    cout<<s4;

    for(int i = 0 ; i <= s4.length() ; i++){
        if(s4[i] >= 'A' && s4[i] <= 'Z'){
            s4[i] += 32;
        }
    }
    cout<<s4;
    sort(s4.begin(),s4.end());
    cout<<s4;
    return 0;

}