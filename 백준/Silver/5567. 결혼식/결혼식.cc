#include <bits/stdc++.h>
using namespace std;

const int MAX = 500;
bool is_used[MAX + 4][MAX + 4], is_used1[MAX + 4];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    while (m--) {
        int a, b;
        cin >> a >> b;
        is_used[a][b] = is_used[b][a] = true;
    }

    int ans = 0;
    for (int i = 2; i <= n; ++i) {
        if (is_used[1][i]) {
            if (!is_used1[i]) {
                is_used1[i] = true;
                ans++;
            }
            for (int j = 2; j <= n; ++j) {
                if (is_used[i][j] && !is_used1[j]) {
                    is_used1[j] = true;
                    ans++;
                }
            }
        }
    }

    cout << ans << "\n";

    return 0;
}