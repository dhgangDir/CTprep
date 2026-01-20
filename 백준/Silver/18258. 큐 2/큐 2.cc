#include <bits/stdc++.h>
using namespace std;

queue<int> q;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    while (n--) {
        string s;
        cin >> s;
        if (s == "push") {
            int num;
            cin >> num;
            q.push(num);
        } else if (!q.empty() && s == "pop") {
            cout << q.front() << "\n";
            q.pop();
        } else if (s == "size")
            cout << q.size() << "\n";
        else if (s == "empty")
            cout << (int)q.empty() << "\n";
        else if (!q.empty() && s == "front")
            cout << q.front() << "\n";
        else if (!q.empty() && s == "back")
            cout << q.back() << "\n";
        else
            cout << -1 << "\n";
    }

    return 0;
}