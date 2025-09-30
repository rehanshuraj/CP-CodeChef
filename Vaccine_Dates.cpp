#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int d,l,r;
        cin>>d>>l>>r;
        if(d>=l && d<=r) cout<<"Take second dose now"<<endl;
        else if(d>r) cout<<"too late"<<endl;
        else cout<<"too early"<<endl;
    }
}
