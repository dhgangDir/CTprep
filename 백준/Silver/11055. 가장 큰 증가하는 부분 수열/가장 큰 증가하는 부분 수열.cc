#include <iostream>

using namespace std;

#define MAX_SEQ 1004

int dp[MAX_SEQ], seq[MAX_SEQ], max_int;

int main() {
    int n;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> seq[i];
    }

    for (int i = 0; i < n; i++) {
        dp[i] = seq[i];
        for (int j = i; j >= 0; j--) {
            if (seq[i] > seq[j]) {
                dp[i] = max(dp[j] + seq[i], dp[i]);
            }
        }
        max_int = max(max_int, dp[i]);
    }

    cout << max_int << '\n';
    
    return 0;
}