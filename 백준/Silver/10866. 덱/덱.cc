#include <iostream>
#include <deque>
using namespace std;

deque<int> dp;
int n;

void input() {
    cin >> n;
}

void solution() {
    string cmd;
    int num;
    while(n--) {
        cin >> cmd;
        if (cmd == "push_front") {
            cin >> num;
            dp.push_front(num);
        } else if (cmd == "push_back") {
            cin >> num;
            dp.push_back(num);
        } else if (cmd == "pop_front") {
            if (dp.empty()) cout << - 1 << '\n';
            else {
                cout << dp.front() << '\n';
                dp.pop_front();
            }
        } else if (cmd == "pop_back") {
            if (dp.empty()) cout << - 1 << '\n';
            else {
                cout << dp.back() << '\n';
                dp.pop_back();
            }
        } else if (cmd == "size") {
            cout << dp.size() << '\n';
        } else if (cmd == "empty") {
            cout << (int)dp.empty() << '\n';
        } else if (cmd == "front") {
            if (dp.empty()) cout << -1 << '\n';
            else cout << dp.front() << '\n';
        } else {
            if (dp.empty()) cout << -1 << '\n';
            else cout << dp.back() << '\n';
        }
    }
}

void solve() {
    input();
    solution();
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}