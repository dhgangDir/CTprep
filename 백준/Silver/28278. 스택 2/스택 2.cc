#include <bits/stdc++.h>
using namespace std;

stack<int> stk;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    while (n--) {
        int cmd;
        cin >> cmd;
        if (cmd == 1) {
            int num;
            cin >> num;
            stk.push(num);
        } else if (cmd == 2) {
            if (!stk.empty()) {
                cout << stk.top() << "\n";
                stk.pop();
            } else
                cout << -1 << "\n";
        } else if (cmd == 3)
            cout << stk.size() << "\n";
        else if (cmd == 4)
            cout << (int)stk.empty() << "\n";
        else {
            if (!stk.empty())
                cout << stk.top() << "\n";
            else
                cout << -1 << "\n";
        }
    }

    return 0;
}