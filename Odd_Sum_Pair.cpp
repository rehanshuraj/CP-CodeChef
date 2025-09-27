#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        int even=0;
        int odd=0;
        cin>>a>>b>>c;
        if(a%2==0) even++;
        else odd++;
        
        if(b%2==0) even++;
        else odd++;
        
        if(c%2==0) even++;
        else odd++;
        
        if(even!=0 && odd!=0) cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
}
