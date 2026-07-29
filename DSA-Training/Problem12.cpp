#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a[10],i;
        int team1=0,team2=0;
        for(int i=0;i<10;i++){
            cin>>a[i];
        }
        if(a[i]==1&&i%2==0){
             team2++;
        }
        if(a[i]==1&&i%2!=0){
             team1++;
        }
        if(team1>team2){
            cout<<1<<endl;
        }
        if(team2>team1){
            cout<<2<<endl;
        }
        else{
            cout<<0<<endl;
        }
    }
}
