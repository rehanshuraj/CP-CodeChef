#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, b, m;
        cin >> n >> b >> m;
        long long ans = 0;

        while (n > 0) {
            long long temp;
            if (n % 2 == 0) temp = n / 2;
            else temp = (n + 1) / 2;

            ans += temp * m;   // solving problems
            n -= temp;         // reduce remaining

            if (n > 0) ans += b; // take break if still problems left
            m *= 2;             // time per problem doubles
        }

        cout << ans << endl;
    }
}
