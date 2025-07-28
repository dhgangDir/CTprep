#include <iostream>
using namespace std;

int t, c;
int change[4] = {25, 10, 5, 1};

void solution() {
    for (int i = 0; i < 4; i++) {
        cout << c / change[i] << ' ';
        c = c % change[i];
    }
    cout << '\n';
}

void input() {
    cin >> t;
}

void solve() {
    input();
    while (t--) {
        cin >> c;
        solution();
    }
}

int main() {
    solve();
    return 0;
}