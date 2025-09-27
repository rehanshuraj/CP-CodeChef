#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--) {
        int N, K;
        cin >> N >> K;

        int maxOnes = (N + 1) / 2;
        int minOnes = N / 2;

        if(K >= minOnes && K <= maxOnes) cout << "YES\n";
        else cout << "NO\n";
    }
}
