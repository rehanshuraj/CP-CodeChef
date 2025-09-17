#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        int n = (a > b) ? a : b;
        int limak = 0;
        int bob = 0;

        for (int i = 1; i <= n; i++) {
            if (i % 2 == 0) {
                bob += i;
                if (bob > b) {
                    bob -= i;
                }
            }
            else {
                limak += i;
                if (limak > a) {
                    limak -= i;
                    break;
                }
            }
        }
        if (limak > bob) cout << "limak" << endl;
        else cout << "bob" << endl;
    }

}