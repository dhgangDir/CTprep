#include <bits/stdc++.h>
using namespace std;

vector<int> v;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    v.resize(m);
    for (int i = 0; i < m; ++i)
        cin >> v[i];

    int ans = 0;
    for (int i = 1; i <= n; ++i)
        for (const auto& num : v)
            if (!(i % num)) {
                ans += i;
                break;
            }

    cout << ans << "\n";

    return 0;
}