#include <iostream>
using namespace std;

typedef long long ll;

ll n, m;

ll count_factor(ll x, int factor) {
    ll cnt = 0;
    while (x) {
        cnt += x / factor;
        x /= factor;
    }
    return cnt;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m;

    ll two = count_factor(n, 2) - count_factor(m, 2) - count_factor(n - m, 2);
    ll five = count_factor(n, 5) - count_factor(m, 5) - count_factor(n - m, 5);

    cout << min(two, five) << '\n';
    return 0;
}
