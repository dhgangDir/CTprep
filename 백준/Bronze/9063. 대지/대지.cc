#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int x, y;
    cin >> x >> y;

    int minX = x, minY = y, maxX = x, maxY = y;
    for (int i = 1; i < n; i++) {
        cin >> x >> y;
        minX = min(x, minX);
        minY = min(y, minY);
        maxX = max(x, maxX);
        maxY = max(y, maxY);
    }

    cout << (maxX - minX) * (maxY - minY) << "\n";

    return 0;
}