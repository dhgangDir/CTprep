#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int cnt = 1800;
    for (int i = 0; i < 4; ++i) {
        int t;
        cin >> t;
        cnt -= t;
    }

    if (cnt >= 300)
        cout << "Yes\n";
    else
        cout << "No\n";

    return 0;
}