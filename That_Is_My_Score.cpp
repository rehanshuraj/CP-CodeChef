#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(11, 0); // scores for 11 problems (1..11)

        for (int i = 0; i < n; i++) {
            int p, s;
            cin >> p >> s;
            if (arr[p-1] < s) arr[p-1] = s; // store best score for problem p
        }

        int sum = 0;
        for (int i = 0; i < 8; i++) { // only problems 1..8 matter
            sum += arr[i];
        }

        cout << sum << "\n";
    }
    return 0;
}
