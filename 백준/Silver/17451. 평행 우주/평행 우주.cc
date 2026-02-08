#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    vector<ll> v(n);
    for (int i = 0; i < n; ++i)
        cin >> v[i];

    ll cur = v[n - 1];

    for (int i = n - 2; i >= 0; --i) {
        if (v[i] > cur)
            cur = v[i];
        else {
            if (cur % v[i] != 0)
                cur = ((cur / v[i]) + 1) * v[i];
        }
    }
    cout << cur << "\n";

    return 0;
}