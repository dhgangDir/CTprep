#include <iostream>
using namespace std;

int n, side = 2;

void input() {
    cin >> n;
}

void solution() {
    for (int i = 0; i < n; i++) 
       side = side * 2 - 1;

    cout << side * side << '\n';
}

void solve() {
    input();
    solution();
}

int main() {
    solve();
    return 0;
}