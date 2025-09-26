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
        for (int i = 0; i < N; i++) cin >> A[i];

        map<int, bool> inside;
        int current = 0, maxCount = 0;

        for (int i = 0; i < N; i++) {
            if (inside[A[i]]) {
                // person leaves
                inside[A[i]] = false;
                current--;
            } else {
                // person enters
                inside[A[i]] = true;
                current++;
            }
            maxCount = max(maxCount, current);
        }

        cout << maxCount << "\n";
    }

    return 0;
}
