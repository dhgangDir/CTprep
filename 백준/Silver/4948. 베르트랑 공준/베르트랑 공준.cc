#include <bits/stdc++.h>
using namespace std;

vector<bool> state(123456 * 2 + 1, true);

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    state[0] = state[1] = false;
    for (int i = 2; i * i <= 123456 * 2; ++i)
        if (state[i])
            for (int j = i * i; j <= 123456 * 2; j += i)
                state[j] = false;

    while (true) {
        int n;
        cin >> n;
        if (!n) break;

        int ans = 0;
        for (int i = n + 1; i <= n * 2; ++i)
            if (state[i])
                ++ans;
        cout << ans << "\n";
    }

    return 0;
}