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
        vector<int> A(N);
        int X = 0;

        for (int i = 0; i < N; i++) {
            cin >> A[i];
            X ^= A[i];
        }

        if (X == 0) {
            cout << 0 << "\n";  // already minimum
            continue;
        }

        int best = X;  // no removal
        for (int i = 0; i < N; i++) {
            best = min(best, X ^ A[i]);
        }

        cout << best << "\n";
    }
    return 0;
}
