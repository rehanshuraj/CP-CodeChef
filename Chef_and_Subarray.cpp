#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++) cin >> A[i];

    int max_len = 0, current_len = 0;

    for (int i = 0; i < N; i++) {
        if (A[i] != 0) {
            current_len++;
            max_len = max(max_len, current_len);
        } else {
            current_len = 0;  // reset at zero
        }
    }

    cout << max_len << "\n";
    return 0;
}
