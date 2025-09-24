#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    std::vector<int> arr(n) ;
	    int i=0;
	    while(i<n){
	        cin>>arr[i];
	        i++;
	    }
	    int start=0;
	    int end=1;
	    long long sum=0;
	    while(end<n){
	       long long num = abs(arr[end]-arr[start]);
	       num=num-1;
	       sum+=num;
	       start++;
	       end++;
	    }
	    cout<<sum<<endl;
	}
	

}
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int cnt=0;
	    map<int , int> mapp;
	    for(int i=0; i<n; i++){
	        int arr;
	        cin>>arr;
	        mapp[arr]++;
	    }
	    int maxi = INT_MIN;
	    for(auto it : mapp){
	        maxi=max(it.second,maxi);
	    }
	   
	    if(maxi==n) cout<<0<<endl;
	    
	    else cout<<n-maxi<<endl;
	}

}
