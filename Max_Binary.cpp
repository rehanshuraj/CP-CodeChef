#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    string s;
	    cin>>s;
	    if(s[0]=='0'){
	        s[0]='1';
	        k=k-1;
	        while(k--){
	            s.push_back('0');
	        }
	    }
	    else{
	        while(k--){
	            s.push_back('0');
	        }
	    }
	    cout<<s<<endl;
	}

}
