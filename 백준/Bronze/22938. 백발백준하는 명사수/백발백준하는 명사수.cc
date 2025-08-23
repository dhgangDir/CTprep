#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long x1, y1, r1, x2, y2, r2;
    cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

    long long dx = x1 - x2, dy = y1 - y2;
    long long rp = r1 + r2;
    
    long long dist2 = (dx * dx) + (dy * dy);
    long long sumR2 = rp * rp;
    cout << (dist2 < sumR2 ? "YES" : "NO") << '\n';
    return 0;
}