#include <bits/stdc++.h>
using namespace std;

const int MAX = 26;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        vector<bool> chk(MAX, false);
        for (const auto& c : s)
            chk[c - 'A'] = true;

        int ans = 0;
        for (int i = 0; i < MAX; ++i)
            if (!chk[i])
                ans += i + 'A';

        cout << ans << "\n";
    }

    return 0;
}