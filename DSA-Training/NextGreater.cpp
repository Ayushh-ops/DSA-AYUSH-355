#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        int notfound=1;
        vector<int>list;
        for(int j=i+1;j<n;j++){
            if(arr[j]>arr[i]){
                notfound=0;
                list.push_back(arr[j]);
            }
        }
        if(notfound==1){
         cout<<arr[i]<<"  "<<"-1";
       }
       else{
           cout<<arr[i]<<"  ";
           for(int k=0;k<list.size();k++){
               cout<<list[k]<<" ";
           }
       }
       cout<<endl;
    }
}