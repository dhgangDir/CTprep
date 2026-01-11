#include <bits/stdc++.h>
using namespace std;

int cvrt[26] = {10,};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    for (int i = 1; i < 26; i++) cvrt[i] = cvrt[i - 1] + 1;

    string n;
    int b;

    cin >> n >> b;

    reverse(n.begin(), n.end());
    unsigned long long d = 1, ans = 0;
    for (int i = 0; i < n.size(); i++) {
        if (n[i] >= '0' && n[i] <= '9')
            ans += (n[i] - '0') * d;
        else
            ans += cvrt[n[i] - 'A'] * d;
        d *= b;
    }

    cout << ans << "\n";

    return 0;
}