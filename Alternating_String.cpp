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
	    int one=0;
	    int zero=0;
	    for(int i=0; i<n; i++){
	        if(s[i]=='1') one++;
	        else zero++;
	    }
	    
	    if(one == zero) std::cout << one+zero << std::endl;
	    else if(one > zero) std::cout <<(zero*2)+1 << std::endl;
	    else std::cout <<(one*2)+1 << std::endl;
	}

}
