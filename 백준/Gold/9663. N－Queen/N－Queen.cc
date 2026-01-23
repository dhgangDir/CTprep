#include <bits/stdc++.h>
using namespace std;

int n, cnt;
bool is_used1[40];
bool is_used2[40];
bool is_used3[40];

void n_queen(int cur) {
    if (cur == n) {
        cnt++;
        return ;
    }

    for (int i = 0; i < n; ++i) {
        if (is_used1[i] || is_used2[cur + i] || is_used3[cur - i + n - 1])
            continue;
        is_used3[cur - i + n - 1] = is_used2[cur + i] = is_used1[i] = true;
        n_queen(cur + 1);
        is_used3[cur - i + n - 1] = is_used2[cur + i] = is_used1[i] = false;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    n_queen(0);

    cout << cnt << "\n";

    return 0;
}