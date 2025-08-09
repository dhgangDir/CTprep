#include <iostream>
#include <cmath>
using namespace std;

#define MAX_NUM 10004
int sieve[MAX_NUM] = {1, 1, 0, };
int n, m, sum, min_prime;

void input() {
    cin >> n >> m;
}

void solution() {
    int sqrt_m = (int) sqrt(m);
    for (int i = 2; i <= sqrt_m; i++) {
        for (int j = 2; j * i <= m; j++) {
            sieve[j * i] = 1;
        }
    }

    for (int i = n; i <= m; i++) {
        if (!sieve[i]) {
            if (!min_prime) min_prime = i;
            sum += i;
        }
    }
    if (sum == 0) cout << -1 << '\n';
    else {
        cout << sum << '\n';
        cout << min_prime << '\n';
    }
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