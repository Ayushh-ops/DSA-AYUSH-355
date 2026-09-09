#include<bits/stdc++.h>
using namespace std;

// int main(){
//     string s;
//     cin>>s;
//     if(find(s.begin(),s.end(),'&')!=s.end() &&
//        find(s.begin(),s.end(),'#')!=s.end() &&
//        s.size()%2==0){
//         cout<<"YES";
//     }
//     else{
//         cout<<"NO";
//     }
// }

int main(){
    string s;
    cin>>s;
    int x=0;
    int y=0;
    int z=s.size();
    for(char ch:s){
        if( ch=='&'){
        x++;
        }
        if(ch=='#'){
            y++;
        } 
    }
    if(x>0 && y>0 && z%2==0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}