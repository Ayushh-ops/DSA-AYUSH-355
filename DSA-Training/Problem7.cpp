#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int i=1;
    while(a<b){
       if(i%2==0){
        a=a+2;
       }
       else{
        a=a+1;
       }
       i++;
    }
    if(a==b){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;

    }
}
