#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    cin >> n >> k;

    int cnt = 0, i = 1;

    while (i <= n) {
        if (!(n % i)) cnt++;
        if (cnt == k) break;
        i++;
    }

    if (cnt < k) cout << 0 << "\n";
    else cout << i << "\n";

    return 0;
}