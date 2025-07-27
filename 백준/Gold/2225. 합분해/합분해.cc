#include <iostream>
using namespace std;

#define MAX_LEN 204
typedef long long ll;

ll dp[MAX_LEN][MAX_LEN];
int n, k;

int main() {
    cin >> n >> k;

    for (int i = 0; i <= n; i++) {
        dp[1][i] = 1;
    }

    for (int i = 2; i <= k; i++) {
        for (int j = 0; j <= n; j++){
            for (int l = 0; l <= j; l++) {
                dp[i][j] = dp[i][j] + dp[i - 1][l]; 
            }
            dp[i][j] = dp[i][j] % 1000000000;
        }       
    }
    cout << dp[k][n] << '\n';

    return 0;
}