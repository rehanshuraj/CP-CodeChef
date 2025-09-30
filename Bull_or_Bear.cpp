#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    int t;
    cin >> t;
    while (t--)
    {
        cin >> a;
        cin >> b;
        cin >> c;
        int arr[3] = {a, b, c};
        sort(arr, arr + 3);
        cout << arr[1] << endl;
    }
    return 0;
}