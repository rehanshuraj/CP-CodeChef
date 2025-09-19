#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> arr(n);
	    int npos=-1,onepos=-1;
	    for(int i=0; i<n; i++){
	        cin>>arr[i];
	        if(arr[i]==1) onepos=i;
	        if(arr[i]==n) npos=i;
	    }
	    if(onepos>npos){
	        cout<<((n-1)-npos)+(onepos-1)<<endl;
	    }
	    else{
	        cout<<((n-1)-npos)+onepos<<endl;
	    }
	}

}
