#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a, b, c;
    cin >> a >> b >> c;

    int maxE = max({a, b, c});
    int minE = min({a, b, c});
    int midE = a + b + c - (maxE + minE);

    cout << minE + midE + (min(minE + midE - 1, maxE)) << "\n";

    return 0;
}