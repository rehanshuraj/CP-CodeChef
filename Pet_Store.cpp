#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        map<int,int> mapp;
        for(int i=0; i<n ; i++){
            int a;
            cin>>a;
            mapp[a]++;
        }
        bool flag=true;
        for(auto it : mapp){
            if((it.second)%2!=0) flag=false;
        }
        if(flag) cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
}
