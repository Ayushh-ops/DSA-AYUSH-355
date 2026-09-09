// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	int n;
// 	cin>>n;
// 	vector<int>arr(n);
// 	for(int i=0;i<n;i++){
// 	    cin>>arr[i];
// 	}    
// 	vector<int>newarr(n);
// 	int cnt=0;
// 	for(int i=0;i<n;i++){
// 	    if(arr[i]!=0){
// 	        swap(arr[i],arr[cnt]);
// 	        cnt++;
// 	    } 
// 	}
// 	for(int i=0;i<n;i++){
// 	    swap(newarr[i],arr[i]);
// 	}
// 	for(int i=0;i<n;i++){
// 	      cout<<newarr[i]<<" ";
// 	}
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	vector<int>arr(n);
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	}    
	vector<int>newarr;
	int cnt=0;
	for(int i=0;i<n;i++){
	    if(arr[i]!=0){
	        newarr.push_back(arr[i]);
	        cnt++;
	   }
	} 
	    
	 while(cnt<n){
	    newarr.push_back(0);
	    cnt++;
	 }   
	for(int i=0;i<n;i++){
	cout<<newarr[i]<<" ";
	}
}
