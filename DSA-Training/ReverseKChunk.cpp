#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    string ans="";
    for(int i=0;i<n;i+=k){
        string part=s.substr(i,k);
        if((i/k)%2==1)
            reverse(part.begin(),part.end());
        ans=ans+part;
    }
    cout<<ans;
}