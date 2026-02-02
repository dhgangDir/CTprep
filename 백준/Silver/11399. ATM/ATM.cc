#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; ++i)
        cin >> v[i];

    sort(v.begin(), v.end());

    int ans = 0, sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += v[i];
        ans += sum;
    }

    cout << ans << "\n";

    return 0;
}