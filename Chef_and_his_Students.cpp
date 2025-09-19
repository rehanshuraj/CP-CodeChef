#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int ans=0;
        for(int i=0; i<s.length()-1; i++){
            if(s[i]=='<' && s[i+1]=='>') ans++;
        }
        cout<<ans<<endl;
    }
}
