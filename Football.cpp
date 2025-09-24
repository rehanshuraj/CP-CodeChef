#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    std::vector<int> goals(n) ;
	    std::vector<int> fouls(n) ;
	    for(int i=0; i<n; i++) cin>>goals[i];
	    cout<<endl;
	    for(int i=0; i<n; i++) cin>>fouls[i];
	    int maxi=INT_MIN;
	    for(int i=0; i<n; i++){
	        maxi=max(maxi, ((goals[i]*20) - (fouls[i]*10)));
	    }
	    if(maxi<0) cout<<0<<endl;
	    else cout<<maxi<<endl;
	}

}
