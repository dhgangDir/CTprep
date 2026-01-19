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

        stack<char> stk;
        bool flag = true;
        for (auto& c : s) {
            if (c == '(')
                stk.push(c);
            else {
                if (stk.empty()) {
                    flag = false;
                    break;
                }
                stk.pop();
            }
        }

        if (flag && stk.empty())
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}