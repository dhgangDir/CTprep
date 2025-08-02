#include <iostream>
using namespace std;

int i, j;

int gcd(int a, int b) {
    return b ? gcd(b, a % b) : a;
}

int lcm(int a, int b) {
    return (a / gcd(a, b)) * b;
}

int main() {
    cin >> i >> j;

    cout << gcd(i, j) << '\n';
    cout << lcm(i, j) << '\n';

    return 0;
}