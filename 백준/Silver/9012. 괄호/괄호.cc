#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int cnt = 0;
        bool is_valid = true;

        for (auto c : s) {
            if (c == '(')
                cnt++;
            else {
                if (cnt <= 0) {
                    is_valid = false;
                    break;
                }
                cnt--;
            }
        }

        if (is_valid && cnt == 0) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}