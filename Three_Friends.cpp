#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y,z;
	    cin>>x>>y>>z;
	    vector<int> ans={x,y,z};
	    sort(ans.begin(),ans.end());
	    if(ans[2]==(ans[1]+ans[0])) cout<<"yes"<<endl;
	    else cout<<"no"<<endl;
	}

}
