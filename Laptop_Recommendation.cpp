#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    map<int,int> mapp;
	    int maxi=INT_MIN;
	    for(int i=0; i<n; i++){
	        int arr;
	        cin>>arr;
	        mapp[arr]++;
	    }
	     int cnt=0;
	    for(auto it: mapp) {
	        maxi=max(maxi,it.second);
	    }
	    int ans=-1;
	    for(auto it: mapp){
	        if(maxi==it.second){
	            cnt++;
	            ans=it.first;
	        }
	        
	    }
	    if(cnt==1) cout<<ans<<endl;
	    else cout<<"confused"<<endl;
	   
	}

}
