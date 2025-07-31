#include <iostream>
using namespace std;

int n, num = 5, cnt;

void input() {
    cin >> n;
}

void solution() {
    while (num <= n) {
        cnt = cnt + (n / num);
        num = num * 5;
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