#include <iostream>
using namespace std;

int day, a, b, v;

void input() {
    cin >> a >> b >> v;
}

void solution() {
    v = v - a;
    int one_day_move = a - b;
    day = 1 + v / one_day_move;
    day += (v % one_day_move ? 1 : 0);

    cout << day << '\n';
}

void solve() {
    input();
    solution();
}

int main() {
    solve();
    return 0;
}