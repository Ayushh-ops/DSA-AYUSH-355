#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int diff;
    for(int i=0;i<s.size();i++){
        int a=1;
       for(int j=i+1;j<s.size();j++){
        if(s[i]==s[j]){
            a=0;
            diff=j-i-1;
            cout<<diff<<" ";
            break;
        }

       }
       if(a==1){
        cout<<-1<<" ";
       }
    }   
}