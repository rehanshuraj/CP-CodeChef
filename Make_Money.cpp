#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,c,x;
	    cin>>n>>c>>x;
	    vector<int> arr(n);
	    for(int i=0; i<n; i++){
	        cin>>arr[i];
	    }
	    int cnt=0;
	    for(int i=0; i<n; i++){
	        if((c-arr[i])>x){
	            arr[i]=c;
	            cnt++;
	        }
	    }
	    int ans=0;
	    for(int i=0; i<n; i++){
	        ans+=arr[i];
	    }
	    cout<<(ans-(x*cnt))<<endl;
	}

}
