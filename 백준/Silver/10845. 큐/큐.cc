#include <iostream>
#include <queue>
using namespace std;

int n;
queue<int> q;

void input() {
    cin >> n;
}

void solution() {
    string cmd;
    int num;
    while (n--) {
        cin >> cmd;
        if (cmd == "push") {
            cin >> num;
            q.push(num);
        } else if (cmd == "pop") {
            if (q.empty())
                cout << -1 << '\n';
            else {
                cout << q.front() << '\n';
                q.pop();
            }
        } else if (cmd == "size") 
            cout << q.size() << '\n';
          else if (cmd == "empty") {
            cout << (int)q.empty() << '\n';
        } else if (cmd == "front") {
            if (q.empty()) 
                cout << -1 << '\n';
            else 
                cout << q.front() << '\n';
        } else {
            if (q.empty()) 
                cout << -1 << '\n';
            else 
                cout << q.back() << '\n';
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