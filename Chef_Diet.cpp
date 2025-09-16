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
	    bool ans=true;
	    int carry=0;
	    int index=-1;
	    for(int i=0; i<n; i++){
	        cin>>arr[i];
	        arr[i]=arr[i]+carry;
	        if(arr[i]>=k){
	            carry=arr[i]-k;
	        }else{
	            ans=false;
	            index = i+1;
	            break;
	        }
	    }
	    if(ans==true) cout<<"yes"<<endl;
	    else{
	        cout<<"no"<<" "<<index<<endl;
	    }
	    
	}

}
