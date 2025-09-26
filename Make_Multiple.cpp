#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b;
	    cin>>a>>b;
	    if((b-a)==0 || a<=(b-a)) cout<<"yes"<<endl;
	    else cout<<"no"<<endl;
	}

}
