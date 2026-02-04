#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    cin >> n >> k;

    int cnt = 0;
    while (k--) {
        int g;
        cin >> g;
        cnt += g / 2 + g % 2;
    }

    if (cnt >= n)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}