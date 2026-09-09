#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,k;
    cin>>n>>k;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i+=2*k){
        for(int j=0;j<k;j++){
            swap(arr[i+j],arr[i+k+j]);
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}