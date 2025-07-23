#include <iostream>

using namespace std;

#define MAX_ROW 90
#define MAX_COL 2

long long dp[MAX_ROW][MAX_COL] = {
    {0, 1},
};
long long sum;

int main() {
    int n;

    cin >> n;
    for (int i = 1; i < n; i++) {
        dp[i][0] = dp[i - 1][0] + dp[i - 1][1];
        dp[i][1] = dp[i - 1][0];
    }

    sum = dp[n - 1][0] + dp[n - 1][1];

    cout << sum << '\n';

    return 0;
}