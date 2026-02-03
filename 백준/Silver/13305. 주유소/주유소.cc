#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    vector<long long> load(n - 1);
    for (int i = 0; i < n - 1; ++i)
        cin >> load[i];

    vector<long long> oil(n);
    for (int i = 0; i < n; ++i)
        cin >> oil[i];

    long long ans = load[0] * oil[0], mn = oil[0];
    for (int i = 1; i < load.size(); ++i) {
        mn = min(oil[i], mn);
        ans += mn * load[i];
    }

    cout << ans << "\n";

    return 0;
}