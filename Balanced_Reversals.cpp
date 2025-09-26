#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string a;
        cin>>a;
        int zero=0,one=0;
        for(int i=0; i<a.length(); i++){
            if(a[i]=='0') zero++;
            else one++;
        }
        string ans(zero, '0');
        ans += string(one, '1');

        cout<<ans<<endl;
    }
}
