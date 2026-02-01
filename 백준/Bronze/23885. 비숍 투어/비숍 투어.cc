#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    long long sx, sy, ex, ey;
    cin >> sx >> sy >> ex >> ey;
    
    if (sx == ex && sy == ey) {
        cout << "YES\n";
        return 0;
    }

    if (min(n, m) == 1) {
        cout << "NO\n";
        return 0;
    }

    if ((sx + sy) % 2 == (ex + ey) % 2)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}