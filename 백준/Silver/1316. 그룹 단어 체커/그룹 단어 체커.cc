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

        bool check[26];
        fill(check, check + 26, 0);
        bool is_group = true;

        for (int i = 0; i < s.size(); i++) {
            int idx = s[i] - 'a';

            if (check[idx]) {
                if (s[i - 1] != s[i]) {
                    is_group = false;
                    break;
                }
            }
            check[idx] = true;
        }
        if (is_group) ans++;
    }

    cout << ans << "\n";
    return 0;
}