#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int week = n/7;
	    int day = n%7;
	    if(day>=2){
	        cout<<week+1<<endl;
	    }else{
	        cout<<week<<endl;
	    }	    
	}
}
