#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int h,x,y;
	    cin>>h>>x>>y;
	    h=h-y;
	    int ans=0;
	    while(h>0){
	        h=h-x;
	        ans++;
	    }
	    cout<<ans+1<<endl;    
	}

}
