#include<bits/stdc++.h>
using namespace std;
int sum1(int n){
    int sum=0;
    while(n>0){
     sum+=n%10;
     n=n/10;
    }
    return sum;
}
int main(){
        int n,k;
        cin>>n>>k;
        while(n>9){
            n=sum1(n);
            n=n*k;
        }
    cout<<n<<endl;
}

// int main(){
//     int n,k;
//     cin>>n>>k;
//     int res;
//     if(n==0) return 0;
//     if(n%9==0) res=9;
//     else{
//         res=n%9;
//     }
//     int c=res*k;
//     cout<<c<<endl;
// }