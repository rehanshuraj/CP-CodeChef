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
        vector<int> B(N);
        int sum = 0;
        for (int i = 0; i < N; i++) {
            cin >> B[i];
            sum += B[i];
        }
        if (sum % 2 == 0) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
