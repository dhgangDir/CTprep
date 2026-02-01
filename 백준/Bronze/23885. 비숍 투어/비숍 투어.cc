#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    int sx, sy, ex, ey;
    cin >> sx >> sy >> ex >> ey;

    if ((sx + sy) % 2 == (ex + ey) % 2)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}