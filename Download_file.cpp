#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int tc;
    cin>>tc;
    while(tc--){
        int n,k;
        cin>>n>>k;
        int totaltime=0;
        while(n--){
            int t,d;
            cin>>t>>d;
            if(t<=k){
                k=k-t;
                
            }else{
               totaltime=totaltime+(t-k)*d; 
               k=0;
            }
        }
        cout<<totaltime<<endl;
    }
}
