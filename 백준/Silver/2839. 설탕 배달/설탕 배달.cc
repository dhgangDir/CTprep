#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    for (int i = 0; i * 3 <= n; ++i)
        for (int j = 0; j * 5 <= n; ++j)
            if (i * 3 + j * 5 == n) {
                cout << i + j << "\n";
                return 0;
            }

    cout << -1 << "\n";

    return 0;
}