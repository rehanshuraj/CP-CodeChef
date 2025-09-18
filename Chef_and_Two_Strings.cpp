#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    string a,b;
	    cin>>a>>b;
	   
	    int cntdiff=0;
	    int maxi=0; //?
	    for(int i=0;i<a.length(); i++){
	        if(a[i]=='?' || b[i]=='?') maxi++;
	        if(a[i]!=b[i] && a[i]!='?' && b[i]!='?') cntdiff++;
	       
	    }
	    cout<<cntdiff<<" "<<cntdiff+maxi<<endl;
	}
}
