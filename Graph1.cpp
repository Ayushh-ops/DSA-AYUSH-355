#include<bits/stdc++.h>
using namespace std; 
int main() {
    int v,e,a,b;
    cout<<"Enter the vertices and edges";
    cin>>v>>e;
    vector<int>adj[v];
    for(int i=0;i<e;i++)
    {
        cout<<"Enter the end-points of edge "<<i;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    for(int i=0;i<v;i++)
     {
        cout<<"Degree of"<<i<<":"<<adj[i].size()<<endl;
     }
}