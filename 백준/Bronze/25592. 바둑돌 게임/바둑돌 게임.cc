#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int seq = 1, gt = 1;
    while (n - gt >= 0) {
        n -= gt;
        seq++;
        gt++;
    }

    if (seq % 2)
        cout << seq - n << "\n";
    else
        cout << 0 << "\n";

    return 0;
}