#include <bits/stdc++.h>
using namespace std;

int n, c;
vector<int> v;

bool solve(int dist) {
    int cnt = 1;
    int last_pos = v[0];

    for (int i = 1; i < n; ++i) {
        if (v[i] - last_pos >= dist) {
            cnt++;
            last_pos = v[i];
        }
    }

    return cnt >= c;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> c;
    v.resize(n);
    for (int i = 0; i < n; ++i)
        cin >> v[i];

    sort(v.begin(), v.end());

    int st = 1;
    int en = v[n - 1] - v[0];
    int ans = 0;

    while (st <= en) {
        int mid = (st + en) / 2;

        if (solve(mid)) {
            ans = mid;
            st = mid + 1;
        } else
            en = mid - 1;
    }

    cout << ans << "\n";
    return 0;
}