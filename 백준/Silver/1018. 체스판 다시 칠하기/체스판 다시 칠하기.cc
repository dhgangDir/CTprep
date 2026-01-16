#include <bits/stdc++.h>
using namespace std;

string board[54];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; ++i)
        cin >> board[i];

    string wb[8], bw[8];

    for (int i = 0; i < 8; ++i) {
        for (int j = 0; j < 8; ++j) {
            if (!(i % 2)) {
                wb[i] += "WB";
                bw[i] += "BW";
            } else {
                wb[i] += "BW";
                bw[i] += "WB";
            }
        }
    }

    int ans = 8 * 8;
    for (int i = 0; i <= n - 8; i++) {
        for (int j = 0; j <= m - 8; j++) {
            int wb_cnt = 0, bw_cnt = 0;
            for (int k = 0; k < 8; ++k) {
                for (int l = 0; l < 8; ++l) {
                    if (board[i + k][j + l] != bw[k][l])
                        bw_cnt++;
                    if (board[i + k][j + l] != wb[k][l])
                        wb_cnt++;
                }
            }
            ans = min({ans, bw_cnt, wb_cnt});
        }
    }

    cout << ans << "\n";

    return 0;
}