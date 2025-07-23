#include <iostream>

using namespace std;

#define MAX_ROW 104
#define DIVIDIE_NUM 1000000000

int dp[MAX_ROW][10] = {
    {0, 1, 1, 1, 1, 1, 1, 1, 1, 1},
};
int sum;

int main() {
    int n;
    
    cin >> n;

    for (int i = 1; i < n; i++) {
        for (int j = 0; j < 10; j++) {
            if (!j) dp[i][j] = dp[i - 1][j + 1];
            else if (j > 8) dp[i][j] = dp[i - 1][j - 1];
            else dp[i][j] = dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j + 1]) % DIVIDIE_NUM;
        }
    }

    for (int i = 0; i < 10; i++) 
        sum = (sum + dp[n - 1][i]) % DIVIDIE_NUM; 

    cout << sum << '\n';

    return 0;
}