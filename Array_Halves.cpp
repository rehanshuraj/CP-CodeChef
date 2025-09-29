#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<long long> P(2*N);
        for (int i = 0; i < 2*N; i++) cin >> P[i];

        long long count = 0, ans = 0;
        for(int i=0; i<2*N; i++){
            if(P[i]>N) count++;
            else ans+=count;
        }
        cout<<ans<<endl;
    }
}
