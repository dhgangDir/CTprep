#include <bits/stdc++.h>
using namespace std;

const int MAX = 100;
int arr[MAX + 4];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    int ans = 0;
    sort(arr, arr + n, greater<int>());
    while (arr[1] > 0) {
        ans++;
        arr[1]--;
        arr[0]--;
        sort(arr, arr + n, greater<int>());
    }
    ans += arr[0];

    if (ans > 1440)
        cout << -1 << "\n";
    else
        cout << ans << "\n";

    return 0;
}