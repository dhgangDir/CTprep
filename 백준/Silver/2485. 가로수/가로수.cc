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

    int gcdnum = gcd(v[1] - v[0], v[2] - v[1]);
    for (int i = 2; i < n - 1; ++i)
        gcdnum = gcd(gcdnum, v[i + 1] - v[i]);

    long long cnt = 0;
    for (int tree = v[0]; tree <= v[v.size() - 1]; tree += gcdnum)
        cnt++;

    cout << cnt - v.size() << "\n";

    return 0;
}