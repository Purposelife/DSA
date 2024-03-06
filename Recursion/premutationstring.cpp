#include<iostream>
#include<vector>
using namespace std;


void permutation(string s,string &temp, vector<string>&ans,vector<bool>visited){
    if(visited.size() == temp.length()){
        ans.push_back(temp);
        return;
    }

    for(int i = 0 ; i < visited.size(); i++){
        if(visited[i] == 0){
            visited[i] = 1;
            temp.push_back(s[i]);
            permutation(s,temp,ans,visited);
            visited[i] = 0;
            temp.pop_back();
        }
    }
}
int main(){
    string s = "abc";
    vector<bool>visited(3,0);
    vector<string>ans;
    string temp;
    permutation(s,temp,ans,visited);
    for(int i = 0 ; i < ans.size();i++){
        for(int j = 0; j < ans[i].size(); j++){
            cout << ans[i][j]<<" ";
        }
        cout<<endl;
    }
}