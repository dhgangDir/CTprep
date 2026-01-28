#include <bits/stdc++.h>
using namespace std;

int const MAX = 100;
pair<int, int> arr[MAX + 4];
int dp[MAX + 4];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    for (int i = 0; i < n; ++i)
        cin >> arr[i].first >> arr[i].second;

    sort(arr, arr + n);

    for (int i = 0; i < n; ++i) {
        dp[i] = 1;
        for (int j = 0; j < i; ++j)
            if (arr[i].second > arr[j].second)
                dp[i] = max(dp[i], dp[j] + 1);
    }

    cout << n - *max_element(dp, dp + n) << "\n";

    return 0;
}