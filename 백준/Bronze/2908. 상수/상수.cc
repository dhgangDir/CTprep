#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a, b;
    cin >> a >> b;

    int rea = 0, reb = 0;
    for (int exp = 1; a / exp > 0; exp *= 10) {
        rea = rea * 10 + a / exp % 10;
        reb = reb * 10 + b / exp % 10;
    }

    cout << max(rea, reb) << "\n";

    return 0;
}