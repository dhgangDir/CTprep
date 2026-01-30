#include <bits/stdc++.h>
using namespace std;

const int MAX = 1000000;
long long arr[MAX + 4], prefix[MAX + 4], cnt[MAX + 4];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= n; ++i)
        cin >> arr[i];

    for (int i = 1; i <= n; ++i)
        prefix[i] = prefix[i - 1] + arr[i];

    for (int i = 1; i <= n; ++i)
        cnt[prefix[i] % m]++;

    long long ans = cnt[0];
    for (int i = 0; i < m; ++i)
        ans += cnt[i] * (cnt[i] - 1) / 2;

    cout << ans << "\n";

    return 0;
}