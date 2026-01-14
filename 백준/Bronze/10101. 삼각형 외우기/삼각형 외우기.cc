#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int x, y, z;
    cin >> x >> y >> z;

    if (x + y + z == 180) {
        if (!(x ^ y) && !(y ^ z) && !(z ^ x)) cout << "Equilateral\n";
        else if (!(x ^ y) || !(y ^ z) || !(z ^ x))
            cout << "Isosceles\n";
        else if (x ^ y && y ^ z && z ^ x)
            cout << "Scalene\n";
    } else cout << "Error\n";

    return 0;
}