#include <bits/stdc++.h>

using namespace std;

long long gcd(long long a, long long b) {
    while (b != 0) {
        long long temp = b;
        b = a % b;
        
        a = temp;
    }
    return a;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        long long X, Y;
        cin >> X >> Y;

        if (gcd(X, Y) > 1) {
            cout << 0 << "\n";
        }
        else if (gcd(X + 1, Y) > 1 || gcd(X, Y + 1) > 1) {
            cout << 1 << "\n";
        }
        else {
            cout << 2 << "\n";
        }
    }
    return 0;
}
