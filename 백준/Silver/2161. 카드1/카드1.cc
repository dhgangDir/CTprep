#include <iostream>
#include <queue>
using namespace std;

queue<int> qu;
int n;

void input() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        qu.push(i);
    }
}
void solution() {
    while (true) {
        cout << qu.front() << ' ';
        qu.pop();
        if (qu.empty()) break;
        int tmp = qu.front();
        qu.pop();
        qu.push(tmp);
    }
    cout << '\n';
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