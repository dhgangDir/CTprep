#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a, t;
    cin >> a >> t;

    int p = 10 + 2 * (25 - a + t);

    if (p < 0)
        cout << 0 << "\n";
    else
        cout << p << "\n";

    return 0;
}