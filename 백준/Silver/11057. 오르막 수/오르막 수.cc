#include <iostream>

using namespace std;

#define MAX_ROW 1004
#define MAX_CAL 10

int dp[MAX_ROW][MAX_CAL] = {
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
};
int sum;

int main() {
    int n;

    cin >> n;

    for (int i = 1; i < n; i++) {
        for (int j = 0; j < MAX_CAL; j++) {
            for (int k = 0; k < j + 1; k++)
                dp[i][j] = (dp[i][j] + dp[i - 1][k]) % 10007;
        }
      }
    
    for (int i = 0; i < MAX_CAL; i++)
      sum = (sum + dp[n - 1][i]) % 10007;
    cout << sum << '\n';

    return 0;
}