#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int ans = 0;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        if (num == 1) ans++;
        for (int j = 2; j < num; ++j) {
            if (!(num % j)) {
                ans++;
                break;
            }
        }
    }

    cout << n - ans << "\n";

    return 0;
}