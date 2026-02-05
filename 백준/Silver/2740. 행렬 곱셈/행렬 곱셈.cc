#include <bits/stdc++.h>
using namespace std;

const int MAX = 100;
int a[MAX + 4][MAX + 4], b[MAX + 4][MAX + 4];
int ret[MAX + 4][MAX + 4];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            cin >> a[i][j];

    int k;
    cin >> m >> k;

    for (int i = 0; i < m; ++i)
        for (int j = 0; j < k; ++j)
            cin >> b[i][j];

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            for (int l = 0; l < k; ++l) 
                ret[i][l] += a[i][j] * b[j][l];
    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < k; ++j)
            cout << ret[i][j] << " ";
        cout << "\n";
    }

    return 0;
}