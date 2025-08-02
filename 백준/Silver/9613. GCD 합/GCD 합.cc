#include <iostream>
using namespace std;

#define MAX_LEN 104
typedef long long ll;

ll t, n;

void input() {
    cin >> t;
}

ll gcd(ll x, ll y) {
    return y ? gcd(y, x % y) : x;
}

void solution() {
    while(t--) {
        cin >> n;
        ll seq[MAX_LEN], sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> seq[i];
        }
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                sum = sum + gcd(seq[i], seq[j]);
            }
        }
        cout << sum << '\n';
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