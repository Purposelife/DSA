#include<iostream>
using namespace std;

int main(){

    //using adjecent matrix
    int m , n;
    cin>>m>>n;
    int adj[n+1][m+1];
    for(int i = 0 ; i < m ; i++){
        int u,v;
        cin>>u>>v;
        adj[u][v] = 1;
        adj[v][u] = 1;
    }

    //using list vector for undirected graph
    vector<int>adj(n+1);
    for(int i = 0 ; i < m ;i++){
        int u , v;
        cin>>u>>v;
        ans[u].push_back(v);
        ans[v].push_back(u);
    }

    //for directrd graph
    //u-------> v
    vector<int>adj(n+1);
    for(int i = 0 ; i < m ;i++){
        int u , v;
        cin>>u>>v;
        ans[u].push_back(v);
    }

    return 0;
}