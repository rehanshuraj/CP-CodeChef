#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int a,b,c,d,e;
        cin >> a >> b >> c >> d >> e;
        int sum = a+b+c;
        
        bool ok = false;
        // try removing each one of {a,b,c}
        if ((sum-a) <= d && a <= e) ok = true;
        if ((sum-b) <= d && b <= e) ok = true;
        if ((sum-c) <= d && c <= e) ok = true;
        
        cout << (ok ? "yes" : "no") << "\n";
    }
}
