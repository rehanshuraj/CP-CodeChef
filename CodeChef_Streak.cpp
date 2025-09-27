#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        int om=0;
        int maxiom=INT_MIN;
        for(int i=0; i<n; i++){
            if(a[i]!=0) om++;
            else{
                maxiom=max(maxiom,om);
                om=0;
            }
             maxiom=max(maxiom,om);
        }
       
        int addy=0;
        int maxiaddy=INT_MIN;
        for(int i=0; i<n; i++){
            if(b[i]!=0) addy++;
            else{
                maxiaddy=max(maxiaddy,addy);
                addy=0;
            }
            maxiaddy=max(maxiaddy,addy);
        }
        if(maxiaddy>maxiom) cout<<"Addy"<<endl;
        else if(maxiom>maxiaddy) cout<<"Om"<<endl;
        else cout<<"Draw"<<endl;
    }
	// your code goes here

}
