#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,a1,b1,a2,b2;
	    cin>>a>>b>>a1>>b1>>a2>>b2;
	    if((a==a1 || a==b1) && (b==a1 || b==b1)) std::cout << 1 << std::endl;
	    else if((a==a2 || a==b2) && (b==a2 || b==b2)) cout<<2<<endl;
	    else cout<<0<<endl;
	}

}
