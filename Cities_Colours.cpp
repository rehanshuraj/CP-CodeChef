#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int N;
        ll K;
        cin >> N >> K;
        vector<ll> W(N);
        vector<int> C(N);
        for (int i = 0; i < N; i++) cin >> W[i];
        for (int i = 0; i < N; i++) cin >> C[i];

        // dp[color] = max coins we can have if we currently hold this color
        unordered_map<int, ll> dp;
        dp[0] = 0; // start at city 1 with color 0 and 0 coins

        for (int i = 1; i < N; i++) {
            unordered_map<int, ll> new_dp;

            for (auto [col, coins] : dp) {
                // Case 1: keep current color
                ll newCoins = coins - W[i];
                if (col == C[i]) newCoins += 2 * W[i]; // gain instead of lose
                new_dp[col] = max(new_dp[col], newCoins);

                // Case 2: change color to C[i]
                ll changeCoins = coins - K + W[i];
                new_dp[C[i]] = max(new_dp[C[i]], changeCoins);
            }

            dp.swap(new_dp);
        }

        // answer = best over all colors at the end
        ll ans = LLONG_MIN;
        for (auto [col, coins] : dp) ans = max(ans, coins);
        cout << ans << "\n";
    }
}
