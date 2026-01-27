#include <bits/stdc++.h>
using namespace std;

const int MAX = 1000;
int v[MAX + 4][MAX + 4], dp[MAX + 4][MAX + 4];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    for (int i = 0; i < n; ++i)
        cin >> v[i][0] >> v[i][1] >> v[i][2];

    dp[0][0] = v[0][0]; dp[0][1] = v[0][1]; dp[0][2] = v[0][2];

    for (int i = 1; i < n; ++i)
        for (int j = 0; j < 3; ++j)
            dp[i][j] = min(dp[i - 1][(1 + j) % 3], dp[i - 1][(2 + j) % 3]) + v[i][j];

    cout << min({dp[n - 1][0], dp[n - 1][1], dp[n - 1][2]}) << "\n";

    return 0;
}