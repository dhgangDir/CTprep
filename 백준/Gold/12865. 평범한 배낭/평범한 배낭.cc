#include <bits/stdc++.h>
using namespace std;

const int KMAX = 100000, NMAX = 100;
int dp[NMAX + 4][KMAX + 4];
int W[NMAX + 4], V[NMAX + 4];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    cin >> n >> k;

    for (int i = 1; i <= n; ++i)
        cin >> W[i] >> V[i];

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= k; ++j) {
            dp[i][j] = dp[i - 1][j];

            if (j >= W[i])
                dp[i][j] = max(dp[i][j], dp[i - 1][j - W[i]] + V[i]);
        }
    }

    cout << dp[n][k] << "\n";

    return 0;
}