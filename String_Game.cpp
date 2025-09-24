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
        map<int,int> mapp;
        for(auto it: s){
            mapp[it]++;
        }
        bool flag=true;
        int maxi=INT_MIN;
        for(auto it: mapp){
            if( it.second%2 !=0 ) flag=false;
            //maxi=max(maxi,it.second);
        }
        if(flag && maxi!=1) cout<<"yes"<<endl;
        //else if(maxi==1) cout<<"no"<<endl;
        else cout<<"no"<<endl;
        
    }

}
