#include <bits/stdc++.h>
using namespace std;
int main() {
    int T; 
    if(!(cin >> T)) return 0;
    while (T--) {
        int X, H;
        cin >> X >> H;
        int d1 = X/2; // first 5 turns
        int d2 = X;   // afterwards
        int first5 = 5 * d1;
        if (H <= first5) {
            cout << ( (H + d1 - 1) / d1 ) << '\n';
        } else {
            H -= first5;
            cout << 5 + ( (H + d2 - 1) / d2 ) << '\n';
        }
    }
    return 0;
}
