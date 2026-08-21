#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string S;
    cin>>S;
    string p="";
    int k=0;
    for(int i=0;i<n;i++){
        if(isdigit(S[i])){
        k+=(S[i]-'0')*(S[i]-'0');
        }
        else{
            p=p+S[i];
        }
    }
    int x=p.size();
       
        string S1;
        if(k%2==0){  
             k=k%x;
         S1=p.substr(x-k,k)+p.substr(0,x-k);
        }
        else{
             k=k%x;
            S1=p.substr(k,x-k)+p.substr(0,k);
        }
        cout<<S1<<endl;
       
    
}