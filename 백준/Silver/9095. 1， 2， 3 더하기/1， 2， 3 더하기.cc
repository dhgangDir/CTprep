#include <iostream>

using namespace std;

int dp[14] = {0 ,1, 2, 4};
int t, n;

int main() {
    cin >> t;
    for (int i = 4; i <= 11; i++) 
        dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
    
    while (t--) {
        cin >> n;
        cout << dp[n] << '\n';
    }

    return 0;
}