#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int sum, ans = 0;
    for (int i = 0; i < n; ++i) {
        int tmp = i;
        sum = i;
        while (tmp) {
            sum += tmp % 10;
            tmp /= 10;
        }
        if (sum == n) {
            ans = i;
            break;
        }
    }

    cout << ans << "\n";

    return 0;
}