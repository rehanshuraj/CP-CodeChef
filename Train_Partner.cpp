#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        int pos = n % 8;
        if (pos == 0) pos = 8;  // handle multiples of 8

        int partner;
        string type;

        if (pos == 1) { partner = n + 3; type = "LB"; }
        else if (pos == 2) { partner = n + 3; type = "MB"; }
        else if (pos == 3) { partner = n + 3; type = "UB"; }
        else if (pos == 4) { partner = n - 3; type = "LB"; }
        else if (pos == 5) { partner = n - 3; type = "MB"; }
        else if (pos == 6) { partner = n - 3; type = "UB"; }
        else if (pos == 7) { partner = n + 1; type = "SU"; }
        else if (pos == 8) { partner = n - 1; type = "SL"; }

        cout << partner << type << "\n";
    }
}
