#include <iostream>
using namespace std;

#define MAX_SEQ 1004

int seq[MAX_SEQ], dp[MAX_SEQ];
int n, max_len;

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> seq[i];
    }

    for (int i = 0; i < n; i++) {
        dp[i] = 1;
        for (int j = i; j >= 0; j--) {
            if (seq[i] < seq[j])
                dp[i] = max(dp[i], dp[j] + 1);
        }
        max_len = max(dp[i], max_len);
    }

    cout << max_len << '\n';

    return 0;
}