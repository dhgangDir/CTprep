#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int ans = 0;
    while (n--) {
        string s;
        cin >> s;
        int v[26];
        fill(v, v + 26, 0);
        char c = '\0';
        bool flag = false;
        for (int i = 0; i < s.size(); i++) {
            if (v[s[i] - 'a'] && c != s[i]) {
                flag = true;
                break;
            }
            if (!v[s[i] - 'a'] && c != s[i]) {
                c = s[i];
                v[s[i] - 'a'] = 1;
            }
        }
        if (!flag) ans++;
    }

    cout << ans << "\n";

    return 0;
}