#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a, b, v;
    cin >> a >> b >> v;

    int d = (v - a) % (a - b) ? 2 : 1;
    cout << (v - a) / (a - b) + d << "\n";

    return 0;
}