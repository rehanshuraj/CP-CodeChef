#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        long long total = 0;
        int nodd = 0;
        
        for (int i = 0; i < n; i++) {
            long long a;
            cin >> a;
            total += a;
            if (a % 2 == 1) nodd++;
        }
        
        if (total % 2 == 0 && nodd > 0) 
            cout << "YES\n";
        else 
            cout << "NO\n";
    }
    return 0;
}
