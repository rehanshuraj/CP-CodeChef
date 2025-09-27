#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    map<char,int> mapp;
	    for(int i=0; i<s.length(); i++){
	        mapp[s[i]]++;
	    }
	    int cnt=0;
	    for(auto it: mapp){
	        if(it.second >= 2){
	            cnt+=(it.second+1)/2;
	        }else cnt++;
	    }
	    cout<<cnt<<endl;
	}

}
