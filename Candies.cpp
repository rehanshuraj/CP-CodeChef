#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        bool ans = true;
        map<int,int> mpp;
        
        for (int i = 0; i < 2*n; i++) {
            int x;
            cin >> x;
            mpp[x]++;
            if (mpp[x] > 2) ans = false;
        }
        
        if (ans) cout << "yes\n";
        else cout << "no\n";
    }
}
