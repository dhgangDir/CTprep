#include <bits/stdc++.h>
using namespace std;

const int MAX = 100000;
long long arr[MAX + 4];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long n, m, k, x, y;
    cin >> n >> m >> k >> x >> y;

    for (int i = 0; i < n; ++i) {
        int a, b;
        cin >> a >> b;
        arr[i] = a * x - b * y;
    }
    sort(arr, arr + n);

    long long ans = k * x + k * y;
    for (int i = 0; i < m; ++i)
        ans += arr[i];

    cout << ans << "\n";

    return 0;
}