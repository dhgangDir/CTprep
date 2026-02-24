#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    if (m * 100 / n >= 81)
        cout << "yaho\n";
    else
        cout << "no\n";

    return 0;
}