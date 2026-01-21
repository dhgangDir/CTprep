#include <bits/stdc++.h>
using namespace std;

vector<int> v;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    v.resize(n);
    double sum = 0;
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
        sum += v[i];
    }

    cout << (int)round(sum / v.size()) << "\n";

    sort(v.begin(), v.end());

    cout << v[v.size() / 2] << "\n";

    int cnt = 0;
    for (auto i : v) {
        int cmp = upper_bound(v.begin(), v.end(), i) - lower_bound(v.begin(), v.end(), i);
        if (cnt < cmp)
            cnt = cmp;
    }

    vector<int> mv;
    for (auto i : v) {
        int cmp = upper_bound(v.begin(), v.end(), i) - lower_bound(v.begin(), v.end(), i);
        if (cnt == cmp)
            mv.push_back(i);
    }

    mv.erase(unique(mv.begin(), mv.end()), mv.end());
    if (mv.size() > 1) cout << mv[1] << "\n";
    else cout << mv[0] << "\n";

    cout << v.back() - v.front() << "\n";

    return 0;
}