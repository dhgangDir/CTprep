#include <iostream>
using namespace std;

#define MAX_NUM 100004

int sticker[2][MAX_NUM];
int dp[2][MAX_NUM];
int t;

void input() {
    cin >> t;
}

void solution() {
    while(t--) {
        int n;
        cin >> n;
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < n; j++) 
                cin >> sticker[i][j];
        }

        dp[0][0] = sticker[0][0]; 
        dp[1][0] = sticker[1][0];
        dp[0][1] = dp[1][0] + sticker[0][1];
        dp[1][1] = dp[0][0] + sticker[1][1];

        for (int i = 2; i < n; i++) {
            dp[0][i] = max(dp[1][i - 1], dp[1][i - 2]) + sticker[0][i];
            dp[1][i] = max(dp[0][i - 1], dp[0][i - 2]) + sticker[1][i];
        }
        cout << max(dp[0][n - 1], dp[1][n - 1]) << '\n';
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