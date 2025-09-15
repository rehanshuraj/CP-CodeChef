#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int r,o,c;
	cin>>r>>o>>c;
	
	int remainingover = 20-o;
	int remainingrun = r-c;
	
	if((remainingover*36) > remainingrun) {
	    cout<<"yes"<<endl;
	}else{
	    cout<<"no"<<endl;
	}
	

}
