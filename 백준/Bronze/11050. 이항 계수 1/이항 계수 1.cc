#include <bits/stdc++.h>
using namespace std;

int factorial(int n) {
    if (!n) return 1;
    return n * factorial(n - 1);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    cin >> n >> k;

    int m = 1;
    for (int i = 0; i < k; ++i)
        m *= n - i;

    cout << m / factorial(k) << "\n";

    return 0;
}