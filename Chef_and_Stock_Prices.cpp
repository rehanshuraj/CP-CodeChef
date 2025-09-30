#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int s,a,b,c;
	    cin>>s>>a>>b>>c;
	    if(b*100>=s*(100+c) and s*(100+c)>=100*a)
	        cout<<"YES"<<endl;
	    else
	        cout<<"NO"<<endl;
	}
	return 0;
}