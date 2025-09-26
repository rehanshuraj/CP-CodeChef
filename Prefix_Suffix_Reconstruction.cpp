#include <bits/stdc++.h>
using namespace std;

vector<int> computeF(const vector<int>& A){
    int N = A.size();
    vector<int> P(N), S(N), F(N+1,0);
    P[0]=A[0];
    for(int i=1;i<N;i++) P[i]=max(P[i-1],A[i]);
    S[N-1]=A[N-1];
    for(int i=N-2;i>=0;i--) S[i]=min(S[i+1],A[i]);
    for(int i=0;i<N;i++){
        F[P[i]]++;
        F[S[i]]++;
    }
    F.erase(F.begin());
    return F;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; cin>>T;
    while(T--){
        int N; cin>>N;
        vector<int> F(N+1);
        for(int i=1;i<=N;i++) cin>>F[i];

        vector<int> cntP(N+1,0), cntS(N+1,0);
        int remaining = N;
        // Greedily allocate prefix-max counts
        for(int x=1;x<=N;x++){
            cntP[x]=min(F[x],remaining);
            remaining -= cntP[x];
        }

        bool ok=true;
        for(int x=1;x<=N;x++){
            cntS[x]=F[x]-cntP[x];
            if(cntS[x]<0) ok=false;
        }

        if(!ok){
            cout<<-1<<"\n";
            continue;
        }

        // Build any valid array A
        vector<int> A;
        vector<int> usedP(N+1,0), usedS(N+1,0);
        int curMax=1;
        for(int i=0;i<N;i++){
            int pick=-1;
            for(int x=curMax;x<=N;x++){
                if(usedP[x]<cntP[x] || usedS[x]<cntS[x]){
                    pick=x;
                    break;
                }
            }
            if(pick==-1){ ok=false; break; }
            A.push_back(pick);
            curMax = max(curMax,pick);
            if(usedP[pick]<cntP[pick]) usedP[pick]++;
            else usedS[pick]++;
        }

        if(!ok){
            cout<<-1<<"\n";
            continue;
        }

        vector<int> FF=computeF(A);
        ok=true;
        for(int i=1;i<=N;i++) if(FF[i]!=F[i]) { ok=false; break; }

        if(!ok) cout<<-1<<"\n";
        else for(int i=0;i<N;i++) cout<<A[i]<<" \n"[i==N-1];
    }
    return 0;
}
