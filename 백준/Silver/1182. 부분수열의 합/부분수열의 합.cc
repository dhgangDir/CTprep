#include <bits/stdc++.h>
using namespace std;

int n, s;
vector<int> v;
int sum, ans;

void func(int start) {
    if (start == n)
        return ;

    for (int i = start; i < n; ++i) {
        sum += v[i];
        if (sum == s) ans++;
        func(i + 1);
        sum -= v[i];
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> s;

    v.resize(n);
    for (int i = 0; i < n; ++i)
        cin >> v[i];

    func(0);

    cout << ans << "\n";

    return 0;
}