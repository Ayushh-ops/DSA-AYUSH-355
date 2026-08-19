#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,k;
    cin>>n>>m>>k;
    vector<vector<int>>mat(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>mat[i][j];
        }
    }
    
    for(int i=0;i<n/2;i++){
        int lr=n-i-1;
        for(int j=0;j<k;j++){
            swap(mat[i][m-k+j],mat[lr][j]);
        }
    }
    for(auto row:mat){
        for(auto num:row){
            cout<<num<<" ";
        }
        cout<<endl;
    }

}