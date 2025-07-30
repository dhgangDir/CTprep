#include <iostream>
using namespace std;

#define MAX_LEN 1000004

int dp[MAX_LEN];
int n;

void input() {
    cin >> n;
}

void solution() {
    dp[1] = 0;
    for (int i = 2; i <= n; ++i) {
        dp[i] = dp[i - 1] + 1;
        if (!(i % 3)) dp[i] = min(dp[i/3] + 1, dp[i]);
        if (!(i % 2)) dp[i] = min(dp[i/2] + 1, dp[i]);
    }
    cout << dp[n] << '\n';
}

void solve() {
    input();
    solution();
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}