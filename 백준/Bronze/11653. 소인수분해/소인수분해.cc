#include <iostream>
#include <cmath>
using namespace std;

int n;

void input() {
    cin >> n;
}

void solution() {
    int sqrt_n = (int)sqrt(n);
    for (int i = 2; i <= sqrt_n; i++) {
        while (!(n % i)) {
            cout << i << '\n';
            n /= i;
        }
    }
    if (n > 1) cout << n << '\n';
}

void solve() {
    input();
    solution();
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}