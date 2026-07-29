#include<bits/stdc++.h>
using namespace std;
int main(){
    int v,e,a,b;
    vector<int>adj[v];
    cout<<"Enter no of vertices and edges: ";
    cin>>v>>e;
    for(int i=0;i<e;i++){
        cout<<"Enter end-points of edge "<<i;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    for(int i=0;i<v;i++){
        for(int j=0;j<adj[i].size();j++){
            cout<<i<<" : ";
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }
    queue<int>q;
    vector<int>visited(v,0);
    q.push(0);
    visited[0]=1;
    while(!q.empty()){
        int x=q.front();
        cout<<x<<" ";
        q.pop();
        for(int i=0;i<adj[x].size();i++){
            if(visited[adj[x][i]]==0){
                visited[adj[x][i]]=1;
                q.push(adj[x][i]);
                
            }
        }

    }
}