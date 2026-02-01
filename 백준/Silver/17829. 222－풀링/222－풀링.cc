#include <bits/stdc++.h>
using namespace std;

const int MAX = 1024;
int arr[MAX + 4][MAX + 4];

int func(int x1, int x2, int y1, int y2, int size) {
    if (size == 1)
        return arr[x1][y1];

    int m = size / 2;
    int v[] = {
        func(x1, x2 - m, y1, y2 - m, m),
        func(x1 + m, x2, y1, y2 - m, m),
        func(x1, x2 - m, y1 + m, y2, m),
        func(x1 + m, x2, y1 + m, y2, m)
    };
    sort(v, v + 4);
    return v[2];
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            cin >> arr[i][j];

    cout << func(0, n, 0, n, n) << "\n";

    return 0;
}