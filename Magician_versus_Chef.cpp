#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,x,s;
	    cin>>n>>x>>s;
	    vector<int> arr(n,0);
	    arr[x-1]=1;
	    for(int i=1; i<=s; i++){
	        int a,b;
	        cin>>a>>b;
	        swap(arr[a-1],arr[b-1]);
	    }
	    int index=-1;
	    for(int i=0; i<n; i++){
	       if(arr[i]==1){
	           index=i;
	           break;
	       }
	    }
	    cout<<index+1<<endl;
	}

}
