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
	    int one=0;
	    int minusone=0;
	    for(int i=0; i<n; i++){
	        cin>>ans[i];
	        if(ans[i]==1) one++;
	        else minusone++;
	    }
	   
	    if(n%2!=0) cout<<-1<<endl;
	    else{
	        cout<<(abs(minusone-one))/2 <<endl;
	    }
	    
	}

}
