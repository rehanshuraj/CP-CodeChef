#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int a,b,x;
        cin>>a>>b>>x;
        int diff=abs(a-b);
        if(diff%(2*x)==0) cout<<"yes"<<endl;
        else{
            cout<<"no"<<endl;
        }
    }
}
