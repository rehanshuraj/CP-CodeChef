#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    if(!(cin >> T)) return 0;
    while (T--) {
        long long N, K;
        cin >> N >> K;
        long long ans = min(N - K, K);
        cout << ans << '\n';
    }
    return 0;
}
