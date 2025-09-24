#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    int n;
	    cin>>n;
	    double f = 0.143*n;
	    double f_n = pow(f,n);
	    if((f_n - abs(f_n))<0.5)
	    {
	        cout<<round(abs(f_n))<<endl;
	    }
	    else
	    {
	        cout<<round(abs(f_n)+1)<<endl;
	    }
	}
	return 0;
}