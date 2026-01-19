#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    long long m = 1, x = 1;
    int ans = 0;
    while (x <= n) {
        ++ans;
        x += 2 * m + 1;
        ++m;
    }

    cout << ans << "\n";
    return 0;
}