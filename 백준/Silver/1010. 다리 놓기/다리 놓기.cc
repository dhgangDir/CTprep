#include <bits/stdc++.h>
using namespace std;

const int MAX = 30;
long long v[MAX + 1][MAX + 1];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    for (int i = 1; i <= MAX; ++i) {
        v[i][0] = v[i][i] = 1;
        for (int j = 1; j < i; ++j)
            v[i][j] = v[i - 1][j - 1] + v[i - 1][j];
    }

    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        cout << v[m][n] << "\n";
    }

    return 0;
}