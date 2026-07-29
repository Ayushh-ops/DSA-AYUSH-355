#include<bits/stdc++.h>
using namespace std;
int main() {
    int v,e,a,b;
    cout<<"Enter the vertices and edges";
    cin>>v>>e;
    vector<int>adj[v];
    for(int i=1;i<=e;i++)
    {
        cout<<"Enter the end-points of edge "<<i;
        cin>>a>>b;
        adj[a].push_back(b);
    }
    vector<int> indegree(v,0);
    vector<int> outdegree(v,0);
    for(int i=0;i<v;i++)
    {
        outdegree[i]=adj[i].size();
    }
    for(int i=0;i<v;i++)
    {
        for(int j=0;j<adj[i].size();j++)
        {
            indegree[adj[i][j]]++;
        }
    }
    for(int i=0;i<v;i++)
    {
        cout<<"Indegree of "<<i<<": "<<indegree[i]<<endl;
        cout<<"Outdegree of "<<i<<": "<<outdegree[i]<<endl;
    }
}