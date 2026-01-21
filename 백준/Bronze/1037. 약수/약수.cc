#include <bits/stdc++.h>
using namespace std;

vector<long long> v;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    v.resize(n);
    for (int i = 0; i < n; ++i)
        cin >> v[i];

    sort(v.begin(), v.end());

    cout << v.front() * v.back() << "\n";

    return 0;
}