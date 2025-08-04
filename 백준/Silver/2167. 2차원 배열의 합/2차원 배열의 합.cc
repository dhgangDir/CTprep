#include <iostream>
using namespace std;

#define MAX_ROW 304
#define MAX_COL 304

int vec[MAX_ROW][MAX_COL];
int n, m, k;

void input() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> vec[i][j];
        }
    }
    cin >> k;
}

void solution() {
    while (k--) {
        int x, x_len, y, y_len, sum = 0;
        cin >> x >> y >> x_len >> y_len;
        for (int i = x - 1; i < x_len; i++) {
            for (int j = y - 1; j < y_len; j++) {
                sum = sum + vec[i][j];
            }
        }
        cout << sum << '\n';
    }
}

void solve() {
    input();
    solution();
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}