#include <iostream>
using namespace std;

#define MAX_SIDE 104

long long dp[MAX_SIDE] = {0, 1, 1, 1, 2, 2, 3, 4, 5, 7, 9 };
int t, n;

int main() {
    cin >> t;
    for (int i = 11; i < MAX_SIDE; i++) {
        dp[i] = dp[i - 2] + dp[i - 3];
    }

    while (t--) {
        cin >> n;
        cout << dp[n] << '\n';
    }

    return 0;
}