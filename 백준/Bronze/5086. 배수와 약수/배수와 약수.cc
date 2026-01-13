#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int f, s;

    while (true) {
        cin >> f >> s;
        if (!f && !s) break;

        if (!(s % f)) cout << "factor\n";
        else if (!(f % s)) cout << "multiple\n";
        else cout << "neither\n";
    }

    return 0;
}