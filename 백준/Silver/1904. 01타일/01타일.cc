#include <bits/stdc++.h>
using namespace std;

const int MAX = 1000000;
int dp[MAX + 4];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    dp[1] = 1; dp[2] = 2;

    for (int i = 3; i <= n; ++i)
        dp[i] = (dp[i - 2] + dp[i - 1]) % 15746;

    cout << dp[n] << "\n";

    return 0;
}