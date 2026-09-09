#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	vector<int>arr(n);
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	}
	for(int i=0;i<n;i++){
	    int cnt=0;
	    for(int j=i+1;j<n;j++){
	       if(arr[i]>arr[j])
	           cnt++;
	    }
	    cout<<cnt<<" ";
	}
	
}
