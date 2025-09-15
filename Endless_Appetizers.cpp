#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here 
	int t;
	cin>>t;
	while(t--){
	    int x,y,r;
	    cin>>x>>y>>r;
	    int extrasticks = r/30;
	    int totalsticks = x+extrasticks;
	    int plates = (totalsticks+y-1)/y;
	    cout<<plates<<endl;
	    
	}

}
