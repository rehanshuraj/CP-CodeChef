#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        std::vector<int> ans(3);
        ans.push_back(a);
        ans.push_back(b);
        ans.push_back(c);
        sort(ans.rbegin(),ans.rend());
        cout<<ans[1]+ans[0]<<endl;
    }
}
