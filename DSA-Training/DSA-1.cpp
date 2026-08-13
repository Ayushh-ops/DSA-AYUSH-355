#include<bits/stdc++.h>
using  namespace std;

int sod(int n){
    int sum=0;
    while(n>0){
        sum+=n%10;
        n=n/10;
    }
    return sum;
}
int main(){
    int t;
    cin>>t;
    while(t--){
    int val_start,val_end;
    cin>>val_start>>val_end;
    int sum=0;
    int cnt=0;
    for(int i=val_start;i<=val_end;i++){
        if(i%3==0 && sod(i)%2==0){
          cnt++;
        }
    }
    cout<<cnt<<endl;
   }
    
}