#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> ans(n);
	    int cnt=0;
	    for(int i=0;i<n;i++){
	        
	       cin>>ans[i];
	    }
	    for(int i=0;i<n-1;i++){
	        
	        if(ans[i]>ans[i+1]){
	            swap(ans[i],ans[i+1]);
	            break;
	        }
	    }
	    bool yes=true;
	    for(int i=0;i<n-1;i++){
	        
	       if(ans[i]>ans[i+1])  yes=false;
	    }
	    if(yes) cout<<"yes"<<endl;
	    else cout<<"no"<<endl;
	}

}
