// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     unordered_map<int,int>m={{1,2},{2,3},{3,4}};
//     for(int i=0;i<m.size();i++){
//         cout<<m[i]<<" ";
//     }
// }
//given an integer n and n no of elements return sum of repetitve elements
#include<bits/stdc++.h>
using namespace std;
main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(1);
    v.push_back(5);
    v.push_back(2);
    v.push_back(3);
    for(auto x:v)
    cout<<x<<" ";
    /*int n;
    cin>>n;
    vector<int>nums;
    int y;
    for(int i=0;i<n;i++){
        cin>>y;
        nums.push_back(y);
    }
    for(auto i:nums){
        cout<<i<<" ";

    }*/
    unordered_map<int,int>m;
    for(auto x:v)
    m[x]++;
    cout<<"Map Size:"<<m.size()<<endl;
    for(int i=0;i<m.size();i++){
        cout<<m[i]<<" ";
    }
    int sum=0;
    for(auto x:m){
        if(x.second>1)
        sum+=x.first;
    }
    cout<<"Sum:"<<sum<<endl;

}