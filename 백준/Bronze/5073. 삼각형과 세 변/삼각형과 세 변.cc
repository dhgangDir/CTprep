#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int x, y, z;
    while (true) {
        cin >> x >> y >> z;
        if (!x && !y && !z) break;

        int maxE = max({x, y, z});
        if (maxE < x + y + z - maxE) {
            if (x == y && y == z && z == x)
                cout << "Equilateral\n";
            else if (x == y || y == z || z == x)
                cout << "Isosceles\n";
            else
                cout << "Scalene\n";
        } else
            cout << "Invalid\n";
    }

    return 0;
}