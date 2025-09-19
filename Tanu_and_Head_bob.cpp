#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string a;
        cin>>a;
        int i=0;
        int y=0;
        int N=0;
        for(int j=0; j<a.length(); j++){
            if(a[j]=='I') i++;
            if(a[j]=='Y') y++;
            if(a[j]=='N') N++;
        }
        if(i==0 && y==0) cout<<"not sure"<<endl;
        else if(i==0) cout<<"not indian"<<endl;
        else cout<<"indian"<<endl;
    }
}
