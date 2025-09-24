#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    std::vector<int> arr(n);
	    string ans ="";
	    for(int i=0; i<n; i++){
	        cin>>arr[i];
	        if(arr[i]%k==0) ans.push_back('1');
	        else ans.push_back('0');
	    } 
	    cout<<ans<<endl;
	}

}
