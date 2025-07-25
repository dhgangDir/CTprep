#include <iostream>

using namespace std;

#define MAX_SEQ 1004

int dp_down[MAX_SEQ], dp_up[MAX_SEQ], seq[MAX_SEQ];
int n, max_len;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> seq[i];
    }

    for (int i = 0; i < n; i++) {
        dp_down[i] = 1;
        for (int j = i; j >= 0; j--) {
            if (seq[j] < seq[i])
                dp_down[i] = max(dp_down[i], dp_down[j] + 1);
        }
    }

    for (int i = n - 1; i >= 0; i--) {
        dp_up[i] = 1;
        for (int j = i; j < n; j++) {
            if (seq[j] < seq[i])
                dp_up[i] = max(dp_up[i], dp_up[j] + 1);
        }
        max_len = max(max_len, dp_down[i] + dp_up[i] - 1);
    }

    cout << max_len << '\n';

    return 0;
}