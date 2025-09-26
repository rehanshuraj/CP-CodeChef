#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<int> L(n), R(n);
        for (int i = 0; i < n; i++) cin >> L[i];
        for (int i = 0; i < n; i++) cin >> R[i];

        int bestIndex = 0;
        int maxValue = L[0] * R[0];
        int bestRating = R[0];

        for (int i = 1; i < n; i++) {
            int val = L[i] * R[i];
            if (val > maxValue) {
                maxValue = val;
                bestRating = R[i];
                bestIndex = i;
            } else if (val == maxValue) {
                if (R[i] > bestRating) {
                    bestRating = R[i];
                    bestIndex = i;
                }
                // If R[i] == bestRating, keep current bestIndex (tie-break by smaller index)
            }
        }

        cout << bestIndex + 1 << "\n"; // 1-based indexing
    }
    return 0;
}
