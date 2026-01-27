#include <bits/stdc++.h>
using namespace std;

const int MAX = 1000;
int arr[MAX + 4], dp[MAX + 4];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    for (int i = 0; i < n; ++i) {
        int mx = 0;
        for (int j = arr[i] - 1; j > 0; --j)
            mx = max(mx, dp[j]);
        dp[arr[i]] = mx + 1;
    }

    cout << *max_element(dp, dp + MAX + 4) << "\n";
}