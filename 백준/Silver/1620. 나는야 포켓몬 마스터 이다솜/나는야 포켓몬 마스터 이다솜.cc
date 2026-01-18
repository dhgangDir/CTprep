#include <bits/stdc++.h>
using namespace std;

unordered_map<string, int> mp;
vector<string> v;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    v.resize(n + 1);
    for (int i = 1; i <= n; i++) {
        string name;
        cin >> name;
        mp[name] = i;
        v[i] = name;
    }

    while (m--) {
        string s;
        cin >> s;

        if (isdigit(s[0])) {
            int idx = stoi(s);
            cout << v[idx] << "\n";
        } else
            cout << mp[s] << "\n";
    }

    return 0;
}