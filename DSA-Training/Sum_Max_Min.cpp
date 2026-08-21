#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;

    vector<vector<int>> mat(n,vector<int>(m));

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>mat[i][j];
        }
    }

    for(int i=0;i<n;i++){

        int sum=accumulate(mat[i].begin(),mat[i].end(),0);

        int maxi=*max_element(mat[i].begin(),mat[i].end());

        int mini=*min_element(mat[i].begin(),mat[i].end());

        cout<<sum<<" "<<maxi<<" "<<mini<<endl;
    }
}