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
	    map<int ,int> mapp;
	    bool odd = false;
	    for(int i=0; i<n; i++){
	        mapp[s[i]]++;
	        
	    }
	    for(int i=0; i<mapp.size(); i++){
	        if(mapp[s[i]] % 2 !=0) odd=true;
	    }
	    if(n%2) cout<<"no"<<endl;
	    else if(odd==false) cout<<"yes"<<endl;
	    else cout<<"no"<<endl;
	}
	

}
