#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, S;
        cin >> N >> S;
        cout << min(S, 2 * N - S) << "\n";
    }
    return 0;
}
