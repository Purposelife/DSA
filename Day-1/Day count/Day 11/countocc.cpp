#include<iostream>
using namespace std;

char getmax(string s){
    //created array of count.
    int arr[26] = {0};
    for(int i=0;i<s.length();i++){
        char ch = s[i];
        int number = 0;
        number = ch -'a';
        arr[number]++;
    }
    int ans=0;
    int maxi= -1;
    for(int i=0;i<26;i++){
        if(maxi < arr[i]){
            ans = i;
            maxi=arr[i];
        }
        maxi = max(maxi,arr[i]);
    }
    char finalAns='a'+ ans;
    return finalAns;
}
int main(){
    string s;
    cin>>s;
    cout<<getmax(s);

    return 0;
}
