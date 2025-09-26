#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        std::vector<int> ans(n) ;
        int sum=x;
        int maxi=sum;
        
        for(int i=0; i<n ; i++){
           cin>>ans[i]; 
           sum+=ans[i];
           maxi=max(maxi,sum);
        }
        cout<<maxi<<endl;
        
    }
}
