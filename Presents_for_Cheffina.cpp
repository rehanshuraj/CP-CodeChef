#include <iostream>
using namespace std;
typedef long long ll;
int main()
{
    int n;
    cin>>n;
    while(n--){
        ll p,q,r,ans;
        cin>>p;
        r=p/5;
        q=p%5;
        ans=4*r+q;
            cout<<ans<<"\n"; 
        }
    }