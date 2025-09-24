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
        vector<int> A(N+1);
        bool all1 = true, all2 = true;
        bool hasOdd1 = false, hasEven1 = false;

        for (int i = 1; i <= N; i++) {
            cin >> A[i];
            if (A[i] == 1) {
                all2 = false;
                if (i % 2 == 0) hasEven1 = true;
                else hasOdd1 = true;
            } else {
                all1 = false;
            }
        }

        if (all1) {
            cout << "No\n";
        } else if (all2) {
            cout << "Yes\n";
        } else {
            if (hasOdd1 && hasEven1) cout << "No\n";
            else cout << "Yes\n";
        }
    }
    return 0;
}
