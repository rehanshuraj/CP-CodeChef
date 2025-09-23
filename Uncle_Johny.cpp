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
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        
        int k; 
        cin>>k;
        int ans=arr[k-1];
        int index=-1;
        sort(arr.begin(),arr.end());
        for(int i=0; i<n; i++){
            if(ans==arr[i]) index=i;
        }
        cout<<index+1<<endl;
    }
}
