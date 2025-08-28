#include <iostream>
using namespace std;

int b;

void input() {
    cin >> b;
}

void solution() {
    for (int i = 100; i * 11 <= 9900; i++) 
        if (i * 11 == b) cout << i * 10 << '\n';
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