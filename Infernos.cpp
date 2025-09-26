#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int N, X;
        cin >> N >> X;
        vector<int> H(N);
        int maxH = 0;
        int singleTime = 0;

        for (int i = 0; i < N; i++) {
            cin >> H[i];
            maxH = max(maxH, H[i]);
            singleTime += (H[i] + X - 1) / X; // ceiling division
        }

        int minTime = min(singleTime, maxH);
        cout << minTime << "\n";
    }
}
