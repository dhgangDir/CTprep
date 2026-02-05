#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<vector<ll>> Matrix;
const int MOD = 1000000007;

Matrix mult(Matrix& a, Matrix& b) {
    Matrix c(2, vector<ll>(2));
    for (int i = 0; i < 2; ++i)
        for (int j = 0; j < 2; ++j)
            for (int k = 0; k < 2; ++k)
                c[i][k] = (c[i][k] + a[i][j] * b[j][k]) % MOD;

    return c;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n;
    cin >> n;

    Matrix ans = {
        {1, 0},
        {0, 1}
    };
    Matrix base = {
        {1, 1},
        {1, 0}
    };
    
    while (n > 0) {
        if (n % 2 == 1) ans = mult(ans, base);
        base = mult(base, base);
        n /= 2;
    }

    cout << ans[0][1] << "\n";

    return 0;
}