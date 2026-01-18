#include <bits/stdc++.h>
using namespace std;

int get_gcd(int a, int b) {
    return b ? get_gcd(b, a % b) : a;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int u = a * d + b * c;
    int n = b * d;
    int gcdN = get_gcd(u, n);

    cout << u / gcdN << " " << n / gcdN << "\n";

    return 0;
}