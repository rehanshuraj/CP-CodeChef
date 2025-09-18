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
	    int maxfreq=-1;
	    for(int i=0;i<n;i++){
	        int a;
	        cin>>a;
	        mapp[a]++;
	        maxfreq=max(maxfreq,mapp[a]);
	    }
	    if(maxfreq==n) cout<<0<<endl;
	    else cout<<n-maxfreq<<endl;
	}

}
