#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int x, y;
        cin >> x >> y;
        while(x != 0) {
            int temp = x;
            x = y % x;
            y = temp;
        }
        cout << y << endl;
    }
}
