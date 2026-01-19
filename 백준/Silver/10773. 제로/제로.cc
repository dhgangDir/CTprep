#include <bits/stdc++.h>
using namespace std;

stack<int> stk;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int k;
    cin >> k;

    int ans = 0;
    while (k--) {
        int n;
        cin >> n;

        if (!n) {
            ans -= stk.top();
            stk.pop();
        } else {
            stk.push(n);
            ans += n;
        }
    }

    cout << ans << "\n";

    return 0;
}