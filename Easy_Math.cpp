#include <bits/stdc++.h>
using namespace std;

int maxsum(long long multi , long long maxi){
    long long n = multi;
    long long sum = 0;
    while(multi!=0){
        long long remain = multi%10;
        sum+=remain;
        maxi = max(maxi,sum);
        multi/=10;
    }
    return maxi;
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    std::vector<int> arr(n);
	    for(int i=0; i<n; i++){
	        cin>>arr[i];
	    }
	    long long maxi=INT_MIN;
	    for(int i=0; i<n-1; i++){
	       
	        for(int j=i+1; j<n; j++){
	            long long  multi = arr[i] * arr[j];
	            maxi = maxsum(multi,maxi);
	        }
	    }
	    cout<<maxi<<endl;
	}

}
