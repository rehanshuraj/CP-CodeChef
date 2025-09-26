#include <bits/stdc++.h>
using namespace std;


long long sqr(long long x){
    long long ans =0;
    long long low =0 , high = x;
    
    while(low<=high){
        long long mid = low + (high-low)/2;
        if(mid*mid <= x){
            ans=mid;
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return ans;
    
    
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,a;
	    cin>>n>>a;
	    cout<<sqr(n) * a<<endl;
	}

}
