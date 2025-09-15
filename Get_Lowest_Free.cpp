#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;

        set<int> ans = {a, b, c};

        // get the first (smallest) element
        int smallest = *ans.begin();

        cout << a + b +c- smallest << endl;
    }
}
