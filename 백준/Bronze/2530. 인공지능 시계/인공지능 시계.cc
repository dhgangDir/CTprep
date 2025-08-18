#include <iostream>
using namespace std;

int h, m, s, d;

void input() {
    cin >> h >> m >> s >> d;
}

void solution() {
    int sum = h * 3600 + m * 60 + s + d;
    cout << (sum / 3600) % 24 << ' ';
    sum %= 3600;
    cout << (sum / 60) % 60 << ' ';
    sum %= 60;
    cout << (sum) % 60 << '\n';
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