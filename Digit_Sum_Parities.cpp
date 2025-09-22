#include <bits/stdc++.h>
using namespace std;

int sum(int m){
    int sum1=0;
    while(m!=0){
	    int digit = m%10;
	    sum1+=digit;
	    m=m/10;
	}
	return sum1;
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	   
	    int SUM = sum(n);
	    
	    int ans =-1;
	    if(SUM%2==0){ //even
	        while(true){
	            n++;
	            int SUM1=sum(n);
	            if((SUM1%2 != 0)){
	                 ans=n;
	                 break;
	            } 
	        }
	    }
	    else{ //odd
	        while(true){
	            n++;
	            int SUM1=sum(n);
	            if( (SUM1%2 == 0)) {
	                 ans=n;
	                 break;
	            }
	        }
	    }
	    cout<<ans<<endl;
	    
	    
	}

}
