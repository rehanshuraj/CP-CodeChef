#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        unordered_map<int,int> freq;  // to store frequency

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            freq[arr[i]]++;
        }

        bool ans = true;
        for (auto &p : freq) {
            int number = p.first;
            int count = p.second;
            if (count != number && (count%number !=0)) {
                ans = false;
                break;
            }
        }

        if (ans) cout << "yes\n";
        else cout << "no\n";
    }
    return 0;
}
