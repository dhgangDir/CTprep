#include <bits/stdc++.h>
using namespace std;

const int MAX = 128;
bool paper[MAX + 4][MAX + 4];
int bcnt = 0, wcnt = 0;

void func(int x, int y, int size) {
    int b = 0, w = 0;
    for (int i = 0; i < size; ++i)
        for (int j = 0; j < size; ++j) {
            if (b != 0 && w != 0)
                break;
            if (paper[x + i][y + j]) b++;
            else w++;
        }

    if (b && w) {
        int m = size / 2;
        func(x, y, m);
        func(x, y + m, m);
        func(x + m, y, m);
        func(x + m, y + m, m);
    } else {
        if (b) bcnt += 1;
        else wcnt += 1;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            cin >> paper[i][j];

    func(0, 0, n);

    cout << wcnt << "\n";
    cout << bcnt << "\n";

    return 0;
}