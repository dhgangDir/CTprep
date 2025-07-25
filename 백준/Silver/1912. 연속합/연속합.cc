#include <iostream>
using namespace std;

#define MAX_SEQ 100004
int dp[MAX_SEQ], seq[MAX_SEQ];
int n, max_sum;

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) cin >> seq[i];

    max_sum = dp[0] = seq[0];
    for (int i = 1; i < n; i++) {
        dp[i] = max(dp[i - 1] + seq[i], seq[i]);
        max_sum = max(max_sum, dp[i]);
    }
    
    cout << max_sum << '\n';

    return 0;
}