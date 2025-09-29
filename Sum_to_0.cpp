#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    if(n==1){
	        cout<<-1<<endl;
	        continue;
	    }
	    
	    vector<int> ans;
	    if(n%2==0){
	        for(int i=1; i<=n/2; i++){
	            ans.push_back(1);
	            ans.push_back(-1);
	        }
	    }
	    else{
	        ans.push_back(1);
	        ans.push_back(2);
	        ans.push_back(-3);
	        for(int i=1; i<= (n-3)/2 ; i++){
	            ans.push_back(1);
	            ans.push_back(-1);
	        }
	    }
	    for(int i=0; i<ans.size(); i++){
	        cout<<ans[i]<< " ";
	    }
	    cout<<endl;
	}

}
