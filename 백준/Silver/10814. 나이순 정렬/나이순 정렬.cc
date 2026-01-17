#include <bits/stdc++.h>
using namespace std;

vector<pair<int, string>> v;

bool cmp(const pair<int, string>& a, const pair<int, string>& b) {
    return a.first < b.first;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    v.resize(n);
    for (int i = 0; i < n; ++i)
        cin >> v[i].first >> v[i].second;

    stable_sort(v.begin(), v.end(), cmp);

    for (auto it : v)
        cout << it.first << " " << it.second << "\n";

    return 0;
}