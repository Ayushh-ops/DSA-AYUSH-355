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
	    int cnt=1;
	    for(int j=0;j<n;j++){
	       if(arr[i]<arr[j])
	           cnt++;
	    }
	    cout<<cnt<<" ";
	}
	
}