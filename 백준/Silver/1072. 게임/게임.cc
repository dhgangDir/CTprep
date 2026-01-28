#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long x, y;
    cin >> x >> y;

    long long z = y * 100 / x;

    if (z >= 99) {
        cout << -1 << "\n";
        return 0;
    }

    long long low = 1, high = 1000000000;
    long long ans = -1;

    while (low <= high) {
        long long mid = (low + high) / 2;
        long long new_z = ((y + mid) * 100) / (x + mid);

        if (new_z > z) {
            ans = mid;
            high = mid - 1;
        } else
            low = mid + 1;
    }

    cout << ans << "\n";

    return 0;

}