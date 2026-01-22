#include <bits/stdc++.h>
using namespace std;

void kantoa(string& s, int l, int r) {
    if (r - l <= 1) return ;
    int x = (r - l) / 3;
    for (int i = x + l; i < x * 2 + l; ++i)
        s[i] = ' ';
    kantoa(s, l, x + l);
    kantoa(s, x * 2 + l, r);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    while (cin >> n) {
        string s;
        int e = (int)pow(3, n);
        s.resize(e);
        for (int i = 0; i < e; ++i)
            s[i] = '-';
        kantoa(s, 0, e);
        cout << s << "\n";
    }

    return 0;
}