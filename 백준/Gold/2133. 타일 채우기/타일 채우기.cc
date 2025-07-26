#include <iostream>
using namespace std;

#define MAX_NUM 34

int dp[MAX_NUM];
int n;

int main() {
    cin >> n;
    
    dp[0] = 1;
    dp[2] = 3;

    for (int i = 4; i <= n; i += 2) {
        dp[i] = (dp[i - 2] * dp[2]);
        for (int j = i - 4; j >= 0; j -= 2) {
            dp[i] = dp[i] + (dp[j] * 2);
        }
    }

    cout << dp[n] << '\n';

    return 0;
}