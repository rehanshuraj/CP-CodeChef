#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y,n,r;
	    cin>>x>>y>>n>>r;
	    long long mx= n*x;
	    long long my= n*y;
	    if(mx > r){
	        cout<<-1<<endl;
	    }
	    else if( r >= my) cout<<0 << " "<< n<<endl;
	    else {
	        long long b = (r-mx)/(y-x);
	        cout<<n-b << " "<<b << endl;
	    }
	}

}

