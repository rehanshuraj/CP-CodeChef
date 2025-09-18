#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    int zero=0;
	    int one=0;
	    for(int i=0; i<s.length(); i++){
	       if(s[i]=='0') zero++;
	       else one++;
	    }
	    if(zero==0) cout<<1<<endl;
	    else if(one==0) cout<<0<<endl;
	    else if(one>zero) cout<<1+zero<<endl;
	    else if(one<=zero) cout<<one<<endl;
	    
	}

}
