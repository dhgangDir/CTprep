#include <bits/stdc++.h>
using namespace std;

const int MAX = 100000;
int dp[MAX + 4], arr[MAX + 4];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    dp[0] = arr[0];
    for (int i = 1; i < n; ++i)
        dp[i] = max({arr[i - 1] + arr[i], dp[i - 1] + arr[i], arr[i]});

    cout << *max_element(dp, dp + n) << "\n";

    return 0;
}