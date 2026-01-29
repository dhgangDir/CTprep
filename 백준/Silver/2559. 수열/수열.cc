#include <bits/stdc++.h>
using namespace std;

const int MAX = 100000;
int arr[MAX + 4], dp[MAX + 4];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    for (int i = 0; i < m; ++i)
        dp[0] += arr[i];

    int ans = dp[0];
    for (int i = 1; i <= n - m; ++i) {
        dp[i] = dp[i - 1] - arr[i - 1] + arr[i + m - 1];
        ans = max(dp[i], ans);
    }

    cout << ans << "\n";

    return 0;
}