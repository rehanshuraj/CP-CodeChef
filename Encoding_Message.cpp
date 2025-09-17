#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    for(int i=0; i<n-1; i+=2){
	        int j=i+1;
	        swap(s[i],s[j]);
	        
	    }
	    for(int i=0; i<n; i++){
	        int a=s[i];
	        s[i]=122-(a%97);
	    }
	    
	    
	    cout<<s<<endl;
	    
	}

}
