#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    double a, b;
    cin >> a >> b;

    double m = (b - a) / 400;
    cout << 1 / (1 + pow(10, m)) << "\n";

    return 0;
}