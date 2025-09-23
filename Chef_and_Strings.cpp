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
