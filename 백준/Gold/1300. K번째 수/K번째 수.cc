#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    cin >> n >> k;

    int st = 1, en = k;
    int ans = 0;
    while (st <= en) {
        int mid = (st + en) / 2;
        int cnt = 0;

        for (int i = 1; i <= n; ++i)
            cnt += min(n, mid / i);

        if (cnt >= k) {
            ans = mid;
            en = mid - 1;
        } else
            st = mid + 1;
    }

    cout << ans << "\n";
    
    return 0;
}