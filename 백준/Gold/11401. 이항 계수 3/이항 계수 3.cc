#include <bits/stdc++.h>
using namespace std;

const long long P = 1000000007;
long long fact[4000005];

long long power(long long base, long long exp) {
    long long res = 1;
    base %= P;
    while (exp > 0) {
        if (exp % 2 == 1) res = res * base % P;
        base = base * base % P;
        exp /= 2;
    }
    return res;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    cin >> n >> k;

    fact[0] = 1;
    for (int i = 1; i <= n; ++i)
        fact[i] = fact[i - 1] * i % P;

    long long A = fact[n];
    long long B = fact[k] * fact[n - k] % P;

    long long ans = A * power(B, P - 2) % P;

    cout << ans << "\n";

    return 0;
}