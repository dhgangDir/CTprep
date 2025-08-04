#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> divisors;
int n, k;

void input() {
    cin >> n >> k;
}

void solution() {
    int sqrt_n = (int)sqrt(n);
    for (int i = 1; i <= sqrt_n; i++) {
        if (!(n % i)) {
            divisors.push_back(i);
            if (i != n / i) 
                divisors.push_back(n / i);
        }
    }
    sort(divisors.begin(), divisors.end());
    if (divisors.size() >= k) cout << divisors[k - 1] << '\n';
    else cout << 0 << '\n';
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