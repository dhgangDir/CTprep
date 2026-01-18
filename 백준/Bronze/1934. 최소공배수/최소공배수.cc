#include <bits/stdc++.h>
using namespace std;

int get_gcd(int a, int b) {
    return b ? get_gcd(b, a % b) : a;
}

int get_lcm(int a, int b) {
    if (!a || !b) return 0;
    return a / get_gcd(a, b) * b;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    while (n--) {
        int a, b;
        cin >> a >> b;
        cout << get_lcm(a, b) << "\n";
    }

    return 0;
}