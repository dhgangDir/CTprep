#include <bits/stdc++.h>
using namespace std;

unordered_map<string, int> mp;
vector<pair<string, int>> v;

bool cmp(const pair<string, int>& a, const pair<string, int>& b) {
    if (a.second != b.second)
        return a.second > b.second;
    if (a.first.size() != b.first.size())
        return a.first.size() > b.first.size();
    return a.first < b.first;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;
    while (n--) {
        string s;
        cin >> s;
        if (s.size() < m)
            continue;
        mp[s]++;
    }

    for (const auto& it : mp)
        v.push_back({it.first, it.second});

    sort(v.begin(), v.end(), cmp);

    for (auto s : v)
        cout << s.first << "\n";

    return 0;
}