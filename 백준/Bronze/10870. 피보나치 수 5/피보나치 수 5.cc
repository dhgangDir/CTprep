#include <bits/stdc++.h>
using namespace std;

long long fibo(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibo(n - 1) + fibo(n - 2);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    cout << fibo(n) << "\n";

    return 0;
}