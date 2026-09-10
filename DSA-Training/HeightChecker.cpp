#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	vector<int>arr(n);
	vector<int>newarr(n);
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	    newarr[i]=arr[i];
	}
	sort(arr.begin(),arr.end());
	int cnt=0;
	for(int i=0;i<n;i++){
     if(arr[i]!=newarr[i]){
         cnt++;
     }
	}
	cout<<cnt;
}