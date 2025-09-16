#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        
        int cnt = 0;
        bool found = false;
        
        for(int i=0; i<n; i++){
            if(s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u'){
                cnt++;
                if(cnt == 4){
                    found = true;
                    break;
                }
            } else {
                cnt = 0;
            }
        }
        
        if(found) cout << "no\n";
        else cout << "yes\n";
    }
}
