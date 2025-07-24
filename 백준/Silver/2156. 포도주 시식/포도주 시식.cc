#include <iostream>

using namespace std;

#define MAX_WINE 10004

int n;
int wine[MAX_WINE], dp[MAX_WINE];

int main() {
    cin >> n;

    for (int i = 1; i <= n; i++) 
        cin >> wine[i];
    
    dp[1] = wine[1];
    dp[2] = dp[1] + wine[2];
    for (int i = 3; i <= n; i++) {
        dp[i] = max(dp[i - 3] + wine[i - 1] + wine[i], dp[i - 2] + wine[i]);
        dp[i] = max(dp[i], dp[i - 1]);
    }

    cout << dp[n] << '\n';

    return 0;
}