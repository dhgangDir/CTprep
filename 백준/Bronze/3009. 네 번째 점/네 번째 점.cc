#include <bits/stdc++.h>
using namespace std;

int cood[4][3];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    for (int i = 0; i < 3; i++)
        cin >> cood[i][0] >> cood[i][1];

    for (int i = 0; i < 2; i++) {
        if (cood[0][i] == cood[1][i]) cout << cood[2][i] << " ";
        else if (cood[1][i] == cood[2][i]) cout << cood[0][i] << " ";
        else cout << cood[1][i] << " ";
    }
    cout << "\n";

    return 0;
}