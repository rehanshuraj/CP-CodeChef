#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int maxi=INT_MIN;
        while(n--){
            int s,r;
            cin>>s>>r;
            if(s<=x){
               maxi=max(maxi,r); 
            }
            
        }
        cout<<maxi<<endl;
    }
}
