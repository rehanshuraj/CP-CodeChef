#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int a,b;
	cin>>a>>b;
	int diff = a-b;
	int lastdigit = diff%10;
	
	if(lastdigit!=9) cout<<diff+1<<endl;
	else cout<<diff-1<<endl;
}
