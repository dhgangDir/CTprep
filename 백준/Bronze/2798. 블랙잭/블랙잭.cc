#include <bits/stdc++.h>
using namespace std;

int arr[104];


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    int ans = 0;
    for (int i = 0; i < n - 2; ++i)
        for (int j = i + 1; j < n - 1; ++j) {
            for (int k = j + 1; k < n; ++k) {
                int sum = arr[i] + arr[j] + arr[k];
                if (ans < sum && sum <= m)
                    ans = sum;
            }
        }

    cout << ans << "\n";

    return 0;
}