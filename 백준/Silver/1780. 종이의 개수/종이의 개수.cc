#include <bits/stdc++.h>
using namespace std;

const int MAX = 2187;
int board[MAX + 4][MAX + 4];
int cnt[3];

void func(int x, int y, int size) {
    int start = board[x][y];
    bool mixed = false;

    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            if (start != board[i + x][j + y]) {
                mixed = true;
                break;
            }
        }
        if (mixed)
            break;
    }

    if (mixed) {
        int m = size / 3;
        func(x, y, m);
        func(x, y + m, m);
        func (x, y + 2 * m, m);
        func(x + m, y, m);
        func(x + m, y + m, m);
        func(x + m, y + 2 * m, m);
        func(x + 2 * m, y, m);
        func(x + 2 * m, y + m, m);
        func (x + 2 * m, y + 2 * m, m);
    } else {
        if (start == -1) cnt[0]++;
        else if (start == 0) cnt[1]++;
        else cnt[2]++;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            cin >> board[i][j];

    func(0, 0, n);

    for (const auto& i : cnt)
        cout << i << "\n";

    return 0;
}