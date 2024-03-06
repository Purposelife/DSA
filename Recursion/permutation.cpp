#include<iostream>
#include<vector>
using namespace std;

void permutation(int arr[], vector<int>&temp ,vector<vector<int>>&ans,vector<bool>&visited){

    if(visited.size() == temp.size()){
        ans.push_back(temp);
        return;
    }

    //left subtree.
    for(int i = 0; i < visited.size() ; i++){
        if(visited[i] == 0){
            visited[i] = 1;
            temp.push_back(arr[i]);
            permutation(arr,temp,ans,visited);
            visited[i]= 0;
            temp.pop_back();
        }
    }
}

int main(){
    int arr[] = {1,2,3};
    vector<vector<int> >ans;
    vector<int>temp;
    vector<bool>visited(3,0);
    permutation(arr,temp,ans,visited);
    for(int i = 0 ; i < ans.size();i++){
        for(int j = 0; j < ans[i].size(); j++){
            cout << ans[i][j]<<" ";
        }
        cout<<endl;
    }
}