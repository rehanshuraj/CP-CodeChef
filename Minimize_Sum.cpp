#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int N, M;
        cin >> N >> M;
        vector<int> A(N);
        long long sum = 0;
        for (int i = 0; i < N; i++) {
            cin >> A[i];
            sum += A[i];
        }

        // count wraps
        vector<int> wrap(M + 1, 0);
        for (int x : A) {
            if (x != 0) wrap[M - x]++;
        }

        long long ans = sum;
        long long cur = sum;
        for (int k = 1; k < M; k++) {
            cur += N;                 // each element +1
            cur -= 1LL * wrap[k] * M; // handle wraps
            ans = min(ans, cur);
        }

        cout << ans << "\n";
    }
    return 0;
}
