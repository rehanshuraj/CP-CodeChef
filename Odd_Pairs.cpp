#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int even=n/2;
	    int odd=n-even;
	    cout<<2*(even*odd)<<endl;
	}

}