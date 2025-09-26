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
        int posCount = 0, negCount = 0;
        for (int i = 0; i < N; i++) {
            cin >> A[i];
            if (A[i] > 0) posCount++;
            else if (A[i] < 0) negCount++;
        }

        long long result = 1LL * posCount * (posCount - 1) / 2
                         + 1LL * negCount * (negCount - 1) / 2;

        cout << result << "\n";
    }
    return 0;
}
