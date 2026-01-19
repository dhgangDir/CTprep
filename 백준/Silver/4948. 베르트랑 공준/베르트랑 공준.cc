#include <bits/stdc++.h>
using namespace std;

const int MAX = 123456 * 2;
vector<bool> is_prime(MAX + 1, true);
int prime_cnt[MAX + 1];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i <= MAX; ++i)
        if (is_prime[i])
            for (int j = i * i; j <= MAX; j += i)
                is_prime[j] = false;

    int cnt = 0;
    for (int i = 1; i <= MAX; ++i) {
        if (is_prime[i]) ++cnt;
        prime_cnt[i] = cnt;
    }

    while (true) {
        int n;
        cin >> n;
        if (!n) break;

        cout << prime_cnt[n * 2] - prime_cnt[n] << "\n";
    }

    return 0;
}