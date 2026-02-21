#include <bits/stdc++.h>
using namespace std;

const int MAX = 10;
bool is_used[MAX];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int ans = 0;
    for (int i = 0; i < 5; ++i) {
        int num;
        cin >> num;

        if (is_used[num]) {
            ans -= num;
            is_used[num] = false;
        }
        else {
            ans += num;
            is_used[num] = true;
        }
    }

    cout << ans << "\n";

    return 0;
}