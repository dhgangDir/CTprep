#include <bits/stdc++.h>
using namespace std;

const int MAX = 1000;
int dp[MAX + 4] = {0, 1, 3};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    for (int i = 3; i <= MAX; ++i)
        dp[i] = (dp[i - 2] * 2 + dp[i - 1]) % 10007;

    int n;
    cin >> n;

    cout << dp[n] << "\n";
}