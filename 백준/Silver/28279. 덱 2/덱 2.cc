#include <bits/stdc++.h>
using namespace std;

deque<int> dq;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    while (n--) {
        int cmd;
        cin >> cmd;

        if (cmd == 1) {
            int x;
            cin >> x;
            dq.push_front(x);
        } else if (cmd == 2) {
            int x;
            cin >> x;
            dq.push_back(x);
        } else if (cmd == 3) {
            if (dq.empty())
                cout << -1 << "\n";
            else {
                cout << dq.front() << "\n";
                dq.pop_front();
            }
        } else if (cmd == 4) {
            if (dq.empty())
                cout << -1 << "\n";
            else {
                cout << dq.back() << "\n";
                dq.pop_back();
            }
        } else if (cmd == 5)
            cout << dq.size() << "\n";
        else if (cmd == 6)
            cout << (int)dq.empty() << "\n";
        else if (cmd == 7) {
            if (dq.empty())
                cout << -1 << "\n";
            else
                cout << dq.front() << "\n";
        } else {
            if (dq.empty())
                cout << -1 << "\n";
            else
                cout << dq.back() << "\n";
        }
    }

    return 0;
}