#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, b;
    cin >> n >> b;

    string s;
    for (int i = n; i > 0; i /= b) {
        if (i % b < 10) s.push_back(i % b + '0');
        else s.push_back(i % b - 10 + 'A');
    }
    reverse(s.begin(), s.end());

    cout << s << "\n";

    return 0;
}