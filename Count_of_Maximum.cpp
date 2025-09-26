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
	    for(int i=0; i<n; i++){
	        int a;
	        cin>>a;
	        mapp[a]++;
	    }
	    int cntfrq=0;
	    int maxi=INT_MIN;
	    for(auto it : mapp){
	        maxi=max(maxi,it.second);
	    }
	    int ans=-1;
	    for(auto it: mapp){
	        if(it.second==maxi){
	            ans=it.first;
	            break;
	        }
	    }
	    cout<<ans<<" "<<maxi<<endl;
	}

}
