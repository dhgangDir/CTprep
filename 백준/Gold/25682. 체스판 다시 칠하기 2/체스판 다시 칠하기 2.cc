#include <bits/stdc++.h>
using namespace std;

const int MAX = 2000;
int W[MAX + 4][MAX + 4], B[MAX + 4][MAX + 4];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m, k;
    cin >> n >> m >> k;

    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= m; ++j) {
            char c;
            cin >> c;
            W[i][j] = W[i - 1][j] + W[i][j - 1] - W[i - 1][j - 1];
            B[i][j] = B[i - 1][j] + B[i][j - 1] - B[i - 1][j - 1];
            if ((i + j) % 2) {
                if (c == 'B')
                    B[i][j]++;
                else
                    W[i][j]++;
            } else {
                if (c == 'W')
                    B[i][j]++;
                else
                    W[i][j]++;
            }
        }

    int ans = n * m;
    for (int i = k; i <= n; ++i) {
        for (int j = k; j <= m; ++j) {
            int b = B[i][j] - (B[i - k][j] + B[i][j - k]) + B[i - k][j - k];
            int w = W[i][j] - (W[i - k][j] + W[i][j - k]) + W[i - k][j - k];
            ans = min({ans, b, w});
        }
    }

    cout << ans << "\n";

    return 0;
}