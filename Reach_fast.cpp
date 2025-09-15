#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,k;
	    cin>>a>>b>>k;
	    int d  = abs(b-a);
	    int ans = (d+k-1)/k;
	    cout<<ans<<endl;
	}

}
