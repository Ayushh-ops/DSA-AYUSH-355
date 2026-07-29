#include<bits/stdc++.h>
using namespace std;

int main(){
    int x, y;
    int cnt=0;
    cin>>x>>y;
    for(int i=x;i<=y;i++){
        if(i%3==0){
            int temp=i;
            int temp2=0;
            while(temp!=0){
            temp2=temp2+temp%10;
            temp=temp/10;
            }
            if(temp2%2==0){
             cnt++;
            }

        }
    }
    cout<<cnt<<endl;
}