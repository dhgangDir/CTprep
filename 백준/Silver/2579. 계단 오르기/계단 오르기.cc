#include <iostream>
using namespace std;

#define MAX_STAIR 304

int stairs[MAX_STAIR], dp[MAX_STAIR];
int n, max_score;

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> stairs[i];
    }
    
    dp[0] = stairs[0];
    dp[1] = max(stairs[0] + stairs[1], stairs[1]);
    dp[2] = max(stairs[0] + stairs[2], stairs[1] + stairs[2]);

    for (int i = 3; i < n; i++) {
        dp[i] = max(dp[i - 2] + stairs[i],
                    dp[i - 3] + stairs[i - 1] + stairs[i]);
    }

    cout << dp[n - 1] << '\n';

    return 0;
}