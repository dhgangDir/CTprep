#include <iostream>
using namespace std;

#define MAX_NUM 1004
int n, k, cnt;
int sieve[MAX_NUM] = {1, 1, };

void input() {
    cin >> n >> k;
}

void solution() {
    for (int i = 2; i <= n; i++) {
        if (!sieve[i]) cnt++;
        sieve[i] = 1;
        if (cnt == k) {
            cout << i << '\n';
            return ;
        }
        for (int j = 2; j * i <= n; j++) {
            if (!sieve[i * j]) cnt++;
            sieve[j * i] = 1;
            if (cnt == k) {
                cout << j * i << '\n';
                return ;
            }
        }
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