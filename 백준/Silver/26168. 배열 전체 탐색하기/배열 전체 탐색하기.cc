#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<long long> v;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;
    v.resize(n);
    for (int i = 0; i < n; ++i)
        cin >> v[i];

    sort(v.begin(), v.end());
    
    while (m--) {
        int cmd;
        cin >> cmd;

        if (cmd == 1) {
            long long k;
            cin >> k;
            cout << v.end() - lower_bound(v.begin(), v.end(), k) << "\n";
        } else if (cmd == 2) {
            long long k;
            cin >> k;
            cout << v.end() - upper_bound(v.begin(), v.end(), k) << "\n";
        } else {
            long long i, j;
            cin >> i >> j;
            cout << upper_bound(v.begin(), v.end(), j) - lower_bound(v.begin(), v.end(), i) << "\n";
        }
    }

    return 0;
}