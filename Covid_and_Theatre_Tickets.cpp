#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,m;
	    cin>>n>>m;
	    int cnt =0;
	    for(int i=1; i<=n ; i+=2){
	        for(int j=1; j<=m ; j+=2){
	            cnt++;
	        }
	    }
	    cout<<cnt<<endl;
	}

}
