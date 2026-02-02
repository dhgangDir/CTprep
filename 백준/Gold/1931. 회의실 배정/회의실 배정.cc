#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int>& a, pair<int, int>& b) {
    if (a.second == b.second) 
        return a.first < b.first; 
    return a.second < b.second;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; ++i)
        cin >> v[i].first >> v[i].second;

    sort(v.begin(), v.end(), cmp);

    pair<int, int> t = v[0];
    int ans = 1;
    for (int i = 1; i < n; ++i) {
        if (t.second <= v[i].first) {
            ans++;
            t = v[i];
        }
    }

    cout << ans << "\n";

    return 0;
}