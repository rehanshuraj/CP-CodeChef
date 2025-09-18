#include <bits/stdc++.h>
using namespace std;

int main() {
   int t;
   cin>>t;
   while(t--){
       int n,m,k;
       cin>>n>>m>>k;
       int total=n*m;
       int best=0;
       int vert=total;
       int sq=0;
       
       
       for(int i=1; i<=m; i++){
           sq=i*n;
           if(k==0) break;
           if(sq>=k){
               best=sq;
               break;
           }
       }
       vert-=best;
       int best1=0;
       int hori=total;
       int sq2=0;
       for(int i=1; i<=n; i++){
           sq2=i*m;
           if(k==0) break;
           if(sq2>=k){
               best1=sq2;
               break;
           }
       }
       hori-=sq2;
       int ans = (vert>=hori) ? vert : hori;
       cout<<ans<<endl;
       
       
   }
}
