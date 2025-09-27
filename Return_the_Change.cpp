#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int firstdigi=n/10;
        int lastdigit=n%10;
        int bill=-1;
        if(firstdigi!=0 && lastdigit>=5){
            bill=(firstdigi+1) *10;
            cout<<100-bill<<endl;
        }
        else if (firstdigi!=0 && lastdigit<5){
            bill=firstdigi*10;
            cout<<100-bill<<endl;
        }
        else if(firstdigi==0 && lastdigit>=5){
            cout<<90<<endl;
        }
        else{
            cout<<100<<endl;
        }
    }
}
