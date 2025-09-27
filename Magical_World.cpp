#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int a, b, x;
        cin >> a >> b >> x;
        int rec = a * b;
        int sq = x * x;

        if (sq >= rec) {
            cout << 0 << "\n";
        } 
        else if (sq >= a || sq >= b) {
            cout << 1 << "\n";
        } 
        else {
            cout << 2 << "\n";
        }
    }
    return 0;
}
