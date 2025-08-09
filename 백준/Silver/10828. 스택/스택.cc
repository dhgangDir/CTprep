#include <iostream>
#include <stack>
using namespace std;

stack<int> stk;
int n;

void input() {
    cin >> n;
}

void solution() {
    string cmd;
    int x;
    while (n--) {
        cin >> cmd;
        if (cmd == "push") {
            cin >> x;
            stk.push(x);
        } else if (cmd == "pop") {
            if (stk.empty()) cout << "-1\n";
            else {
                cout << stk.top() << '\n';
                stk.pop();
            }
        } else if (cmd == "size") {
            cout << stk.size() << '\n';
        } else if (cmd == "empty") {
            cout << (int) stk.empty() << '\n';
        } else {
            if (stk.empty()) cout << "-1\n";
            else cout << stk.top() << '\n';
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