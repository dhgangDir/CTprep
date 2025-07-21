#include <iostream>

using namespace std;

int h, m, total;

int main() {
    cin >> h >> m;

    h = h != 0 ? h : 24;

    total = h * 60 + m - 45;

    h = (total / 60) % 24;
    m = total % 60;

    cout << h << ' ' << m << '\n';

    return 0;
}