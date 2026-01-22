#include <bits/stdc++.h>
using namespace std;

vector<string> v;
int n;

void recursion(int rowx, int rowy, int colx, int coly) {
    if (rowy - rowx <= 1 && coly - colx <= 1) return ;

    int x = (rowy - rowx) / 3;
    int y = (coly - colx) / 3;
    for (int i = x + rowx; i < x * 2 + rowx; ++i)
        for (int j = y + colx; j < y * 2 + colx; ++j)
            v[i][j] = ' ';

    recursion(rowx, rowx + x, colx, colx + y);
    recursion(rowx + x, rowx + x * 2, colx, colx + y);
    recursion(rowx + x * 2, rowy, colx, colx + y);

    recursion(rowx, rowx + x, colx + y, colx + 2 * y);
    recursion(rowx + x * 2, rowy, colx + y, colx + 2 * y);

    recursion(rowx, rowx + x, colx + 2 * y, coly);
    recursion(rowx + x, rowx + 2 * x, colx + 2 * y, coly);
    recursion(rowx + 2 * x, rowy, colx + 2 * y, coly);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    v.resize(n);
    for (int i = 0; i < n; i++) {
        v[i].resize(n);
        for (int j = 0; j < n; j++)
            v[i][j] = '*';
    }

    recursion(0, n, 0, n);

    for (const auto& s : v)
        cout << s << "\n";

    return 0;
}