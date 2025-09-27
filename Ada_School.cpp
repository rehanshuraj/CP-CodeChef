#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    if(!(cin >> T)) return 0;
    while(T--) {
        int N, M;
        cin >> N >> M;
        if ((N % 2 == 1) && (M % 2 == 1)) cout << "NO\n";
        else cout << "YES\n";
    }
    return 0;
}
