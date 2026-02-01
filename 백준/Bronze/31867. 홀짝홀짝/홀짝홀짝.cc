#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    string k;
    cin >> n >> k;

    int cnt = 0;
    for (const auto& c : k) {
        if ((c - '0') % 2)
            cnt++;
        else
            cnt--;
    }

    if (cnt > 0)
        cout << 1 << "\n";
    else if (cnt < 0)
        cout << 0 << "\n";
    else
        cout << -1 << "\n";

    return 0;
}