#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a1, a2, a3, b1, b2, b3;
        cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3;

        int alice = a1 + a2 + a3 - min({a1, a2, a3});
        int bob   = b1 + b2 + b3 - min({b1, b2, b3});

        if (alice > bob) cout << "Alice\n";
        else if (alice < bob) cout << "Bob\n";
        else cout << "Tie\n";
    }
}
