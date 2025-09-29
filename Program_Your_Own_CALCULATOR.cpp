#include <bits/stdc++.h>
using namespace std;

int main() {
    double A, B;
    char C;
    cin >> A >> B >> C;   // read inputs

    double result;

    if (C == '+') result = A + B;
    else if (C == '-') result = A - B;
    else if (C == '*') result = A * B;
    else if (C == '/') result = A / B;   // B != 0 (given)

    cout << fixed << setprecision(6) << result << endl;
    return 0;
}
