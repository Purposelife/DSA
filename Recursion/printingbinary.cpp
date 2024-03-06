#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

void printbinary(int n, vector<string>&ans, string temp,int count)
{
    if(count==n){
        ans.push_back(temp);
        return;
    }
    //include disinclude 
    temp.push_back('0');
    printbinary(n,ans,temp,count+1);
    temp.pop_back();
    //exclude disexclude    
    temp.push_back('1');
    printbinary(n,ans,temp,count+1);
}

int main(){
    string temp;
    vector<string> ans;
    int n = 4;
    printbinary(n,ans,temp,0);
    for(int i = 0 ; i < ans.size();i++){
        cout<<ans[i]<<endl;
    }
}