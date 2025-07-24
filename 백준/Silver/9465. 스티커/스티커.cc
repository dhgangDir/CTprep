#include <iostream>
#include <algorithm>
using namespace std;

#define MAX_ROW 2
#define MAX_COL 100004

int t, n, max_int;
int stiker[MAX_ROW][MAX_COL];
int dp[MAX_ROW][MAX_COL];

int main() {
    cin >> t;

    while (t--) {
        cin >> n;
        for (int i = 0; i < MAX_ROW; i++) {
            for (int j = 0; j < n; j++) {
                cin >> stiker[i][j];
            }
        }

        dp[0][0] = stiker[0][0];
        dp[1][0] = stiker[1][0];
        dp[0][1] = dp[1][0] + stiker[0][1];
        dp[1][1] = dp[0][0] + stiker[1][1];

        for (int j = 2; j < n; j++) {
            dp[0][j] = max(dp[1][j - 1], dp[1][j - 2]) + stiker[0][j];
            dp[1][j] = max(dp[0][j - 1], dp[0][j - 2]) + stiker[1][j];
        }
        
        cout << max(dp[0][n - 1], dp[1][n - 1]) << '\n';
    }
    return 0;
}