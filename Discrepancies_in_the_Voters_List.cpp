#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n1,n2,n3;
	cin>>n1>>n2>>n3;
	map<int,int> mapp;
	for(int i=0; i<(n1+n2+n3); i++){
	    int a;
	    cin>>a;
	    mapp[a]++;
	}
	int cnt=0;
	for(auto it: mapp){
	    if(it.second >=2) cnt++;
	}
	cout<<cnt<<endl;
	for(auto it: mapp){
	    if(it.second >=2) cout<<it.first<<endl;
	}

}
