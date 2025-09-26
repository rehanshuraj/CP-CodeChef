#include <bits/stdc++.h>
using namespace std;

int main() {
    
    const int N = 3000;
    vector<bool> prime(N+1, true);
    prime[0] = prime[1] = false;
    for (int i = 2; i * i <= N; i++) {
        if (prime[i]) {
            for (int j = i * i; j <= N; j += i)
                prime[j] = false;
        }
    }

    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;
        int sum = x + y;

        int z = 1;
        while (!prime[sum + z]) z++;  // find next prime
        cout << z << "\n";
    }
    return 0;
}
