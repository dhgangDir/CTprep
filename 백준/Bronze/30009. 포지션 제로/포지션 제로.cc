#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    int x, y, r;
    cin >> n >> x >> y >> r;

    int a = 0, b = 0;
    while (n--) {
        int t;
        cin >> t;

        if (t < x + r && t > x - r)
            a++;
        if (t == x + r || t == x - r)
            b++;
    }

    cout << a << " " << b << "\n";

    return 0;
}