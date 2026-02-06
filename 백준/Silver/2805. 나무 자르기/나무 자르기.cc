#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
vector<ll> v;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n, m;
    cin >> n >> m;

    v.resize(n);
    for (int i = 0; i < n; ++i)
        cin >> v[i];

    ll st = 0, en = *max_element(v.begin(), v.end());
    ll ans;
    while (st <= en) {
        ll mid = (st + en) / 2;

        ll cnt = 0;
        for (const auto i : v)
            if (i - mid > 0) cnt += i - mid;

        if (m > cnt)
            en = mid - 1;
        else {
            ans = mid;
            st = mid + 1;
        }
    }

    cout << ans << "\n";

    return 0;
}