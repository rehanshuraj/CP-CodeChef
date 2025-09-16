#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,a,b;
	    cin>>n>>a>>b;
	    int rounds=0;
	    while(n!=1){
	        n/=2;
	        rounds++;
	    }
	    int breaks=rounds-1;
	   
	    cout<<((rounds*a) + (breaks*b))<<endl;
	}

}
