#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> m >> n;

    int sum = 0, minNum = -1;

    for (int i = m; i <= n; ++i) {
        if (i == 1) continue;

        bool flag = true;
        for (int j = 2; j * j <= i; j++) {
            if (!(i % j)) {
                flag = false;
                break;
            }
        }

        if (flag) {
            sum += i;
            if (minNum == -1) minNum = i;
        }
    }

    if (minNum != -1) cout << sum << "\n" << minNum << "\n";
    else cout << minNum << "\n";

    return 0;
}