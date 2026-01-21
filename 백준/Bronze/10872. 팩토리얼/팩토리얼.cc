#include <bits/stdc++.h>
using namespace std;

int fectorial(int n) {
    if (!n) return 1;
    return n * fectorial(n - 1);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    cout << fectorial(n) << "\n";

    return 0;
}