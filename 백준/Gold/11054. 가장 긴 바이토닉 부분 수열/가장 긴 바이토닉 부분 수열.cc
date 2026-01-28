#include <bits/stdc++.h>
using namespace std;

const int MAX = 1000;
int arr[MAX + 4], dpf[MAX + 4], dpb[MAX + 4];
int ans;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    for (int i = 0; i < n; ++i) {
        dpf[i] = 1;
        for (int j = 0; j < i; ++j)
            if (arr[j] < arr[i]) dpf[i] = max(dpf[j] + 1, dpf[i]);
    }

    for (int i = n - 1; i >= 0; --i) {
        dpb[i] = 1;
        for (int j = n - 1; j > i; --j)
            if (arr[j] < arr[i]) dpb[i] = max(dpb[j] + 1, dpb[i]);
    }

    for (int i = 0; i < n; ++i)
        ans = max(ans, dpf[i] + dpb[i] - 1);

    cout << ans << "\n";

    return 0;
}