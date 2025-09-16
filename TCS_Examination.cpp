#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int Ddsa,Dtoc,Ddm;
	    cin>>Ddsa>>Dtoc>>Ddm;
	    int Sdsa,Stoc,Sdm;
	    cin>>Sdsa>>Stoc>>Sdm;
	    
	    int totalT=Ddsa+Dtoc+Ddm;
	    int totalS=Sdsa+Stoc+Sdm;
	    if(totalS>totalT) cout<<"SLOTH"<<endl;
	    else if(totalS<totalT) cout<<"DRAGON"<<endl;
	    else{
	        if(Ddsa>Sdsa) cout<<"DRAGON"<<endl;
	        else if(Ddsa<Sdsa) cout<<"SLOTH"<<endl;
	        else{
	            if(Stoc>Dtoc) cout<<"SLOTH"<<endl;
	            else if(Stoc<Dtoc) cout<<"DRAGON"<<endl;
	            else{
	                cout<<"tie"<<endl;
	            }
	        }
	        
	    }
	}

}
