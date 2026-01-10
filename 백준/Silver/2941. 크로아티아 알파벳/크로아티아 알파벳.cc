#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;

    int ans = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'j' && i - 1 >= 0)
            if (s[i - 1] == 'l' || s[i - 1] == 'n') continue;
        if (s[i] == '=') {
            if (i - 2 >= 0 && s[i - 2] == 'd' && s[i - 1] == 'z') {
                ans--;
                continue;
            }
            if (s[i - 1] == 'z' || s[i - 1] == 'c' || s[i - 1] == 's') continue;
        }
        if (s[i] == '-')
            if (s[i - 1] == 'c' || s[i - 1] == 'd') continue;
        ans++;
    }

    cout << ans << "\n";
    return 0;
}