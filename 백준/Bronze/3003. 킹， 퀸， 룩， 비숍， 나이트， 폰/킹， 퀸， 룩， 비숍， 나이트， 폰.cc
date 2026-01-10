#include <bits/stdc++.h>
using namespace std;

int piece[6] = {1, 1, 2, 2, 2, 8};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    for (int i = 0; i < 6; i++) {
        cin >> n;
        piece[i] = piece[i] - n;
    }

    for (int i = 0; i < 6; i++) cout << piece[i] << " ";
    cout << "\n";

    return 0;
}