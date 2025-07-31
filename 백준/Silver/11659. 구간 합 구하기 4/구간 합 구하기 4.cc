#include <iostream>
using namespace std;

#define MAX_LEN 100004
int dp[MAX_LEN], num[MAX_LEN];
int n, m, a, b;

void input() {
    cin >> n >> m;
}

void solution() {
    for (int i = 1; i <= n; i++) {
        cin >> num[i];
        dp[i] = dp[i - 1] + num[i];
    }

    while (m--) {
        cin >> a >> b;
        cout << dp[b] - dp[a - 1] << '\n';
    }
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