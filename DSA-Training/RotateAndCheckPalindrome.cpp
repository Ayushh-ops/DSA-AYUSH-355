#include<bits/stdc++.h>
using namespace std;
int main(){
    int s1,s2,k;
    cin>>s1>>s2>>k;
    string s,p;
    cin>>s>>p;
    string S1;
    string S2;
    string concate="";
    int q=k%s1;
    int z=k%s2;
    S1=s.substr(s1-q,q)+s.substr(0,s1-q);
    S2=p.substr(z,s2-z)+p.substr(0,z);
    concate=concate+S1+S2;
    string r=concate;
    reverse(r.begin(),r.end());
    if(r==concate){
        cout<<concate<<" True"<<endl;
    }
    else{
        cout<<concate<<" False"<<endl;
    }

    
}