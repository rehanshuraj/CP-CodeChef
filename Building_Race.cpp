#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    double a,b,x,y;
	    cin>>a>>b>>x>>y;

        double cheftime = a/x;
        double cheflinatime=b/y;

        if(cheflinatime==cheftime) cout<<"both"<<endl;
        else if(cheflinatime>cheftime) cout<<"chef"<<endl;
        else cout<<"chefina"<<endl;

	    
	}

}
