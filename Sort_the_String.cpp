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
	    int i=0;
	    int j=1;
	    int cnt=0;
	    while(j<n){
	        if(s[i]=='1' && s[j]=='0') cnt++;
	        i++;
	        j++;
	    }
	    cout<<cnt<<endl;
	}

}
