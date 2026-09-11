#include<bits/stdc++.h>
using namespace std;
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s,r;
    cin>>s>>r;
    int t;
    cin>>t;
    vector<int>arr(t);
    for(int i=0;i<t;i++){
        cin>>arr[i];
    }
    int n1=s.size();
    for(int i=0;i<t;i++){
        int k=arr[i];k=abs(k%n1);
        if(arr[i]>0){
           s= s.substr(k,n1-k)+s.substr(0,k);
        }
        else{
           s= s.substr(n1-k,k)+s.substr(0,n1-k);
        }
    }
    if(s==r){
        cout<<"Password Accepted";
    }
    else{
        cout<<"Try Again";
    }
}