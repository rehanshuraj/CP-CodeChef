#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int cnt=0;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin>>arr[i];
            arr[i]+=k;
            if(arr[i]%7==0) cnt++;
        }
        cout<<cnt<<endl;
        
    }

}
