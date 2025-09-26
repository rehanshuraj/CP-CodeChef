#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int X, Y;
        cin >> X >> Y;
        int minWins = max(0, X - Y);
        cout << minWins << "\n";
    }
}
