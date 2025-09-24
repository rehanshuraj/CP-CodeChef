#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s,r;
	    cin>>s;
	    cout<<endl;
	    cin>>r;
	    int one =0;
	    int one1=0;
	    for(auto it: s){
	        if(it=='1') one++;
	    }
	    for(auto it: r){
	        if(it=='1') one1++;
	    }
	    if(one == one1) cout<<"yes"<<endl;
	    else cout<<"no"<<endl;
	}

}
