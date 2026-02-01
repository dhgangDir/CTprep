#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int k;
    cin >> k;

    for (int i = 1; i <= k; ++i) {
        int n;
        cin >> n;

        vector<int> v(n);
        for (int j = 0; j < n; ++j)
            cin >> v[j];

        sort(v.begin(), v.end(), greater<int>());

        int lag = v[0] - v[1];
        for (int j = 2; j < n; ++j)
            lag = max(lag, v[j - 1] - v[j]);

        cout << "Class " << i << "\n";
        cout << "Max " << v[0] << ", ";
        cout << "Min " << v[n - 1] << ", ";
        cout << "Largest gap " << lag << "\n";
    }
}