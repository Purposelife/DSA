#include<iostream>
using namespace std;

int superset(string s1,string s2){
    int n = s1.size();
    int m = s2.size();

    int t[n+1][m+1];
    for (int i=0;i<n+1;i++){
        for(int j = 0 ; j < m+1;j++){
            if(i == 0 || j == 0)
                t[i][j] = 0;
            
            else if(s1[i-1] == s2[j-1])
                t[i][j] = 1 + t[i-1][j-1];

            else
                t[i][j] = max(t[i-1][j],t[i][j-1]); 
        }
    }
    return  m+n-t[n][m];
}

int main(){
    string s1 = "ABCDGH";
    string s2 = "ABCM";
    
    cout << "Length of Longest super sequence is "<<superset(s1,s2);
}