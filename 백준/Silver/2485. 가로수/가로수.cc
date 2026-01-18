#include <bits/stdc++.h>
using namespace std;

vector<int> v;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    v.resize(n);
    for (int i = 0; i < n; ++i)
        cin >> v[i];

    int gcdDist = 0;
    for (int i = 1; i < n; ++i) {
        int dist = v[i] - v[i - 1];
        gcdDist = gcd(gcdDist, dist);
    }

    cout << (v.back() - v.front()) / gcdDist + 1 - n << "\n";

    return 0;
}