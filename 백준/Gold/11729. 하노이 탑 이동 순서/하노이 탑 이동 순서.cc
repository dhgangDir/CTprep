#include <bits/stdc++.h>
using namespace std;

queue<pair<int, int>> q;

void hanoi(int n, int from, int tmp, int to) {
    if (n == 0) return ;

    hanoi(n - 1, from, to, tmp);
    q.push({from, to});
    hanoi(n - 1, tmp, from, to);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int k;
    cin >> k;

    hanoi(k, 1, 2, 3);

    cout << q.size() << "\n";
    while (!q.empty()) {
        cout << q.front().first << " " << q.front().second << "\n";
        q.pop();
    }
    return 0;
}