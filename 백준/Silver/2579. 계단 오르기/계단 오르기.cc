#include <bits/stdc++.h>
using namespace std;

const int MAX = 300;
int stair[MAX + 4], dp[MAX + 4];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    for (int i = 1; i <= n; ++i)
        cin >> stair[i];

    dp[1] = stair[1];
    dp[2] = dp[1] + stair[2];

    for (int i = 3; i <= n; ++i)
        dp[i] = max(stair[i - 1] + dp[i - 3], dp[i - 2]) + stair[i];

    cout << dp[n] << "\n";

    return 0;
}