#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        // read prices
        vector<int> price(26);
        for (int i = 0; i < 26; i++) cin >> price[i];

        // read Mathison's text
        string s;
        cin >> s;

        // track which letters appear
        map<char, int> mapp;
        for (char ch : s) {
            mapp[ch]++;
        }

        long long sum = 0;
        for (int i = 0; i < 26; i++) {
            char letter = 'a' + i;
            if (mapp.find(letter) == mapp.end()) {
                sum += price[i];
            }
        }
        cout << sum << endl;
    }
}
