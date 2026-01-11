#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int max = 0, maxR = 1, maxC = 1;
    for (int i = 0; i < 9 * 9; i++) {
        int temp;
        cin >> temp;
        if (max < temp) {
            max = temp;
            maxR = i / 9 + 1;
            maxC = i % 9 + 1;
        }
    }

    cout << max << "\n";
    cout << maxR << " " << maxC << "\n";

    return 0;
}