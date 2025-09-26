#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    if (!(cin >> T)) return 0;
    while (T--) {
        int N;
        long long P;
        cin >> N >> P;
        long long cake_th = P / 2;
        long long hard_th = P / 10;
        int cake = 0, hard = 0;
        for (int i = 0; i < N; ++i) {
            long long solved;
            cin >> solved;
            if (solved >= cake_th) ++cake;
            if (solved <= hard_th) ++hard;
        }
        cout << ((cake == 1 && hard == 2) ? "yes" : "no") << '\n';
    }
    return 0;
}
