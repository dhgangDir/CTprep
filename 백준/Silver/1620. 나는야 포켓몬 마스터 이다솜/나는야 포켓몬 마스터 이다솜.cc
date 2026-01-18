#include <bits/stdc++.h>
using namespace std;

unordered_map<string, string> np;
unordered_map<string, string> pn;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= n; i++) {
        string name;
        cin >> name;
        np[to_string(i)] = name;
        pn[name] = to_string(i);
    }

    while (m--) {
        string s;
        cin >> s;
        if (np.find(s) != np.end())
            cout << np[s] << "\n";
        else
            cout << pn[s] << "\n";
    }

    return 0;
}