#include <bits/stdc++.h>
using namespace std;

const int MAX = 1000000;
vector<bool> is_prime(MAX + 1, true);
vector<int> v;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    is_prime[0] = is_prime[1] = false;

    for (int i = 2; i * i <= MAX; ++i)
        if (is_prime[i])
            for (int j = i * i; j <= MAX; j += i)
                is_prime[j] = false;

    for (int i = 2; i <= MAX; ++i)
        if (is_prime[i])
            v.push_back(i);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int ans = 0;
        for (int i = 0; v[i] <= n / 2; ++i)
            if (v[i] + (n - v[i]) == n && is_prime[n - v[i]])
                ++ans;
        cout << ans << "\n";
    }

    return 0;
}