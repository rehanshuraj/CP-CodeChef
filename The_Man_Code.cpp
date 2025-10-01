#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; cin >> T;
    while (T--) {
        int N; cin >> N;
        int maxPeople = (N + 1) / 2;
        int minPeople = (N + 2) / 3;
        cout << maxPeople << " " << minPeople << "\n";
    }
    return 0;
}
