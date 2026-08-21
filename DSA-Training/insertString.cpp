#include<bits/stdc++.h>
using namespace std;
int main(){
    string str1,str2;
    getline(cin,str1);
    getline(cin,str2);
    
    int n;
    cin>>n;

    for(int i=n;i<str1.size();i+=n+str2.size()){
        
            str1.insert(i,str2);
        
    }
    cout<<str1<<endl;
   
}