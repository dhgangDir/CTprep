#include <bits/stdc++.h>
using namespace std;

int check[10004];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int input;
    for (int i = 0; i < n; ++i) {
        cin >> input;
        check[input]++;
    }

    for (int i = 1; i <= 10000; ++i) {
        while (check[i]) {
            cout << i << "\n";
            --check[i];
        }
    }

    return 0;
}