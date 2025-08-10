#include <iostream>
#include <queue>
using namespace std;

queue<int> qu;
int n;

void input() {
    cin >> n;
}

void solution() {
    string cmd;

    while (n-- ) {
        cin >> cmd;
        if (cmd == "push") {
            int num;
            cin >> num;
            qu.push(num);
        } else if (cmd == "pop") {
            if (qu.empty()) cout << -1 << '\n';
            else {
                cout << qu.front() << '\n';
                qu.pop();
            }
        } else if (cmd == "size") {
            cout << qu.size() << '\n';
        } else if (cmd == "empty") {
            cout << (int)qu.empty() << '\n';
        } else if (cmd == "front") {
            if (qu.empty()) cout << -1 << '\n';
            else cout << qu.front() << '\n';
        } else {
            if (qu.empty()) cout << -1 << '\n';
            else cout << qu.back() << '\n';
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