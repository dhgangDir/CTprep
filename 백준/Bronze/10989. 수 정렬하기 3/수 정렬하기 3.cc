#include <bits/stdc++.h>
using namespace std;

int check[10004];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int mx = 0;
    for (int i = 0; i < n; ++i) {
        int input;
        cin >> input;
        check[input]++;
        mx = max(input, mx);
    }

    for (int i = 1; i <= mx; ++i) {
        while (check[i]) {
            cout << i << "\n";
            --check[i];
        }
    }

    return 0;
}