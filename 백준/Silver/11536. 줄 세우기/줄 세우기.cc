#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    vector<string> input(n);
    for (int i = 0; i < n; ++i)
        cin >> input[i];

    vector<string> inc(input);
    sort(inc.begin(), inc.end());

    int is_inc = true;
    for (int i = 0; i < n; ++i)
        if (inc[i] != input[i]) {
            is_inc = false;
            break;
        }

    if (is_inc) {
        cout << "INCREASING\n";
        return 0;
    }

    vector<string> dec(input);
    sort(dec.begin(), dec.end(), greater<string>());

    int is_dec = true;
    for (int i = 0; i < n; ++i)
        if (dec[i] != input[i]) {
            is_dec = false;
            break;
        }

    if (is_dec) {
        cout << "DECREASING\n";
        return 0;
    }

    cout << "NEITHER\n";

    return 0;
}