#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string a,b;
	    cin>>a>>b;
	    int onea=0;
	    int oneb=0;
	    for(int i=0;i<a.length(); i++){
	        if(a[i]=='1') onea++;
	        if(b[i]=='1') oneb++;
	    }
	    if(oneb==onea) cout<<"yes"<<endl;
	    else cout<<"no"<<endl;
	}

}
