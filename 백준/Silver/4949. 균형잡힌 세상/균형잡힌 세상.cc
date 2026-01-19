#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    while (true) {
        string s;
        getline(cin, s);
        if (s == ".")
            break;

        stack<char> stk;
        bool is_valid = true;
        for (auto c : s) {
            if (c == '[' || c == '(')
                stk.push(c);
            else if (c == ']') {
                if (stk.empty() || stk.top() != '[') {
                    is_valid = false;
                    break;
                }
                stk.pop();
            } else if (c == ')') {
                if (stk.empty() || stk.top() != '(') {
                    is_valid = false;
                    break;
                }
                stk.pop();
            }
        }

        if (is_valid && stk.empty())
            cout << "yes\n";
        else
            cout << "no\n";
    }

    return 0;
}