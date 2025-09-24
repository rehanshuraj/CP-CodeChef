#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> finger(n);
        vector<int> gloves(n);
        
        for (int i = 0; i < n; i++) cin >> finger[i];
        for (int i = 0; i < n; i++) cin >> gloves[i];

        // Check front
        bool front = true;
        for (int i = 0; i < n; i++) {
            if (finger[i] > gloves[i]) {
                front = false;
                break;
            }
        }

        // Check back (reverse gloves)
        bool back = true;
        for (int i = 0; i < n; i++) {
            if (finger[i] > gloves[n - 1 - i]) {
                back = false;
                break;
            }
        }

        if (front && back) cout << "both\n";
        else if (front) cout << "front\n";
        else if (back) cout << "back\n";
        else cout << "none\n";
    }
    return 0;
}
