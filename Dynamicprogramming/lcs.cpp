#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int lcs(string s1,string s2){
    int n = s1.size();
    int m = s2.size();

    int t[n+1][m+1];
    

    for(int i = 0 ; i < n+1 ;i++){
        for(int j = 0 ; j < m+1 ; j++){
            if(i == 0 || j == 0)
                t[i][j] = 0;
            else if(s1[i-1] == s2[j-1])
                t[i][j] = 1 + t[i-1][j-1];
            else
                t[i][j] = max(t[i][j-1],t[i-1][j]);
            }
        }

    return t[n][m];
    }

int main(){
    string s1 = "Aniketkumarsaha";
    string s2 = "Anushapant"; 

    int s = lcs(s1, s2);
    cout<<"LCS is: "<<s<<endl;

}