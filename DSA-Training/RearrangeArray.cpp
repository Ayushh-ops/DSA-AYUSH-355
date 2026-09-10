#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	vector<int>arr(n);
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	}
	sort(arr.begin(),arr.end());
	int i=0;
	int j=n-1;
	for(int p=0;p<n;p++){
	    if(p%2==0){
	       cout<<arr[i]<<" ";
	       i++;
	    }
	    else{
	        cout<<arr[j]<<" ";
	        j--;
	    }
	}
	
}