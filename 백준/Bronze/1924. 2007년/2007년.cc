#include <iostream>
using namespace std;

int x, y;
int month[] = {
    0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31
};
string days[] = {
    "SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"
};

void input() {
    cin >> x >> y;
}

void solution() {
    int sum_day = 0;

    for (int i = 1; i < x; i++) {
        sum_day = sum_day + month[i];
    }
    sum_day += y;

    cout << days[sum_day%7] << '\n';
}

void solve() {
    input();
    solution();
}

int main() {
    solve();
    return 0;
}