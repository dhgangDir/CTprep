#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> v;

bool cmp(pair<int, int> a, pair<int, int> b) {
    if (a.first < b.first) return a.first < b.first;
    return a.first == b.first && a.second < b.second;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    v.resize(n);

    for (int i = 0; i < n; ++i)
        cin >> v[i].first >> v[i].second;

    sort(v.begin(), v.end(), cmp);

    for (auto it : v)
        cout << it.first << " " << it.second << "\n";

    return 0;
}