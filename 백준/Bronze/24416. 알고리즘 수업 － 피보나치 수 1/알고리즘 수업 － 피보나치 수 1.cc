#include <bits/stdc++.h>
using namespace std;

const int MAX = 40;
int dp[MAX + 4];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    dp[1] = dp[2] = 1;
    for (int i = 3; i <= n; ++i)
        dp[i] = dp[i - 2] + dp[i - 1];

    cout << dp[n] << " " << n - 2 << "\n";

    return 0;
}