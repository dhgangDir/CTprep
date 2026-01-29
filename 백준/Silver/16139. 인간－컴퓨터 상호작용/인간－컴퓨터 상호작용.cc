#include <bits/stdc++.h>
using namespace std;

const int ALPHA = 26, MAXLEN = 200000;
int prefix[ALPHA][MAXLEN + 4];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    int q;
    cin >> s >> q;

    for (int i = 1; i <= s.size(); ++i) {
        int idx = s[i - 1] - 'a';
        prefix[idx][i] = prefix[idx][i - 1] + 1;
        for (int j = 0; j < ALPHA; ++j) {
            if (j != idx)
                prefix[j][i] = prefix[j][i - 1];
        }
    }

    while (q--) {
        char a;
        int l, r;
        cin >> a >> l >> r;

        cout << prefix[a - 'a'][r + 1] - prefix[a - 'a'][l] << "\n";
    }

    return 0;
}