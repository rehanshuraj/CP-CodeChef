#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];

        int sum = 0;
        int rounds = 0;
        bool possible = true;

        for (int i = 0; i < n; i++) {
            if (arr[i] > k) { // element bigger than limit → impossible
                possible = false;
                break;
            }

            if (sum + arr[i] <= k) {
                sum += arr[i];
            } else {
                rounds++;    // finish one round
                sum = arr[i]; // start new round with current element
            }
        }

        if (!possible) {
            cout << -1 << "\n";
        } else {
            if (sum > 0) rounds++; // count last round
            cout << rounds << "\n";
        }
    }
}
