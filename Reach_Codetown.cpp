#include <bits/stdc++.h>
using namespace std;

bool isVowel(char c) {
    return c=='A'||c=='E'||c=='I'||c=='O'||c=='U';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    string target = "CODETOWN";

    while(T--) {
        string S;
        cin >> S;
        bool possible = true;
        for(int i=0; i<8; i++) {
            if(isVowel(S[i]) != isVowel(target[i])) {
                possible = false;
                break;
            }
        }
        cout << (possible ? "YES" : "NO") << "\n";
    }
}
