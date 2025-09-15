#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y,a,b;
	    cin>>x>>y>>a>>b;
	    int cnt=0;
	    if(x!=a && x!=b) cnt++;
	    if(y!=a && y!=b) cnt++;
	    cout<<cnt<<endl;
	}

}

