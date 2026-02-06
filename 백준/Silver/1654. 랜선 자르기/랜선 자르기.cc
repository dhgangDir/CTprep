#include <bits/stdc++.h>
using namespace std;

vector<int> v;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int k, n;
    cin >> k >> n;

    v.resize(k);
    for (int i = 0; i < k; ++i)
        cin >> v[i];

    long long st = 1, en = *max_element(v.begin(), v.end());
    long long ans;
    while (st <= en) {
        long long mid = (st + en) / 2;

        long long cnt = 0;
        for (const auto& i : v)
            cnt += i / mid;
        if (cnt < n)
            en = mid - 1;
        else {
            ans = mid;
            st = mid + 1;
        }
    }

    cout << ans << "\n";

    return 0;
}