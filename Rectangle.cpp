#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        vector<int> v = {a, b, c, d};
        sort(v.begin(), v.end());
        // For rectangle: two pairs of equal sides
        if (v[0] == v[1] && v[2] == v[3])
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
