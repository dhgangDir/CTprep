#include <iostream>
using namespace std;

int sum, x, cnt;

void input() {
    cin >> x;
}

void solution() {
    while (x > 0) {
        if (x % 2) cnt++;
        x /= 2;
    }
    cout << cnt << '\n';
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