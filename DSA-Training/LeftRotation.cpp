#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    string S;
    
        int modulo=n%k;
        S=s.substr(modulo,n-modulo)+s.substr(0,modulo);
        cout<<S<<endl;
    
    
}