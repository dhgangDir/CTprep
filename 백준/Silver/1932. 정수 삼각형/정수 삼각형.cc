#include <bits/stdc++.h>
using namespace std;

const int MAX = 500;
int tri[MAX + 4][MAX + 4], dp[MAX + 4][MAX + 4];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    for (int i = 0; i < n; ++i)
        for (int j = 0; j <= i; ++j)
            cin >> tri[i][j];

    dp[0][0] = tri[0][0];

    for (int i = 1; i < n; ++i) {
        dp[i][0] = dp[i - 1][0] + tri[i][0];
        for (int j = 1; j < i; ++j)
            dp[i][j] = max(dp[i - 1][j - 1], dp[i - 1][j]) + tri[i][j];
        dp[i][i] = dp[i - 1][i - 1] + tri[i][i];
    }

    sort(dp[n - 1], dp[n - 1] + n);

    cout << dp[n - 1][n - 1] << "\n";

    return 0;
}