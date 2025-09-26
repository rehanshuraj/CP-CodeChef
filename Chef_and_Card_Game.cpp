#include <bits/stdc++.h>
using namespace std;

int sum_of_digits(int x){
    int sum = 0;
    while(x){
        sum += x % 10;
        x /= 10;
    }
    return sum;
}

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int chefp = 0;
        int mortyp = 0;
        while(n--){
            int c, m;
            cin >> c >> m;
            int csum = sum_of_digits(c);
            int msum = sum_of_digits(m);
            
            if(csum > msum) chefp++;
            else if(csum < msum) mortyp++;
            else {
                chefp++;
                mortyp++;
            }
        }
        if(chefp > mortyp) cout << 0 << " " << chefp << endl;
        else if(chefp < mortyp) cout << 1 << " " << mortyp << endl;
        else cout << 2 << " " << chefp << endl;
    }
}
