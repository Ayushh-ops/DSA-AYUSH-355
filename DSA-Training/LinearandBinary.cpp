#include<bits/stdc++.h>
using namespace std;

int LinearSearch(int arr[], int n, int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}

int BinarySearch(int arr[], int n, int key){
    int low=0, high=n-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]<key){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return -1;
}
    int main(){
        int n,key;
        cin>>n>>key;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int linear=LinearSearch(arr,n,key);
        int binary=BinarySearch(arr,n,key);
        cout<<"Linear Search: "<<linear<<endl;
        cout<<"Binary Search: "<<binary<<endl;
    }
