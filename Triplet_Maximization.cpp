#include <bits/stdc++.h>
using namespace std;

int main() {

    int t; 
    cin >> t;
    while (t--) {
        int a,b;
        cin >> a >> b;
        int Ttrip = (a+b) / 3;
        int ans;
        if (b >= Ttrip) ans = 2 * Ttrip;
        else ans = b + Ttrip;
        cout << ans << "\n";
    }
    return 0;
}
