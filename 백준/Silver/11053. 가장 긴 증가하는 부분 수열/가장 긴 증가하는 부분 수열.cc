#include <iostream>
using namespace std;

#define MAX_SEQ 1004

int seq[MAX_SEQ], dp[MAX_SEQ], max_int;
int n;

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> seq[i];
    }

    for (int i = 0; i < n; i++) {
        dp[i] = 1;
        for (int j = i; j >= 0; j--) {
            if (seq[i] > seq[j])
                dp[i] = max(dp[i], dp[j] + 1);
        }
        max_int = max(dp[i], max_int);
    }

    cout << max_int << '\n';

    return 0;
}