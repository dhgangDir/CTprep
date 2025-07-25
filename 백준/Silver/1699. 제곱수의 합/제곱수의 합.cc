#include <iostream>

using namespace std;

#define MAX_LEN 100004

int dp[MAX_LEN], n;

int main() {
    cin >> n;

    for (int i = 1; i <= n; i++) dp[i] = i;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j * j <= i; j++) {
            dp[i] = min(dp[i], dp[i - j * j] + 1);
        }
    }

    cout << dp[n] << '\n';

    return 0;
}