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
        for(int i=0; i<s.length(); i++){
            char ch=s[i];
            int chh=ch;
            if(chh >=48 && chh<=57) ans+=(ch-'0');
        }
        cout<<ans<<endl;
    }
}
