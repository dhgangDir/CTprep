#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> v;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    v.resize(n);
    for (int i = 0; i < n; ++i)
        cin >> v[i].second >> v[i].first;

    sort(v.begin(), v.end());

    for (auto it : v)
        cout << it.second << " " << it.first << "\n";

    return 0;
}