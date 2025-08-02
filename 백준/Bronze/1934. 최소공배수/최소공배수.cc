#include <iostream>
using namespace std;

int t, a, b;

int gcd(int x, int y) {
    return y ? gcd(y, x % y) : x;
}

int lcm(int x, int y) {
    return (x / gcd(x, y)) * y;
}

int main() {
    cin >> t;
    while (t--) {
        cin >> a >> b;
        cout << lcm(a, b) << '\n';
    }
    return 0;
}