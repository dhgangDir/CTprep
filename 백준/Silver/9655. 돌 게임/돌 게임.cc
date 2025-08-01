#include <iostream>
using namespace std;

int n;

void input() {
    cin >> n;
}

void solution() {
    string winner = n % 2 ? "SK" : "CY";
    cout << winner << '\n';
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