#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int cnt=0;
	    map<int , int> mapp;
	    for(int i=0; i<n; i++){
	        int arr;
	        cin>>arr;
	        mapp[arr]++;
	    }
	    int maxi = INT_MIN;
	    for(auto it : mapp){
	        maxi=max(it.second,maxi);
	    }
	   
	    if(maxi==n) cout<<0<<endl;
	    
	    else cout<<n-maxi<<endl;
	}

}
