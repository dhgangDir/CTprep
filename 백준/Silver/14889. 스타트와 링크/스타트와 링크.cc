#include <bits/stdc++.h>
using namespace std;

int n, dat[21][21];
int ans = INT_MAX;
bool is_used[21];

void func(int start, int depth) {
    if (depth == n / 2) {
        int cnt_f = 0, cnt_t = 0;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (is_used[i] && is_used[j]) 
                    cnt_t += dat[i][j];
                if (!is_used[i] && !is_used[j])
                    cnt_f += dat[i][j];
            }
        }
        ans = min({ans, abs(cnt_f - cnt_t)});
        return ;
    }

    for (int i = start; i < n; ++i) {
        is_used[i] = true;
        func(i + 1, depth + 1);
        is_used[i] = false;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            cin >> dat[i][j];

    is_used[0] = true;
    func(1, 1);

    cout << ans << "\n";

    return 0;
}