#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    vector<int> arr(n);
	    for(int i=0; i<n; i++){
	        cin>>arr[i];
	        if(arr[i]<=k){
	            k=k-arr[i];
	            arr[i]=1;
	            
	        }else{
	            arr[i]=0;
	        }
	        cout<<arr[i];
	    }
	    cout<<endl;
	    
	}

}
