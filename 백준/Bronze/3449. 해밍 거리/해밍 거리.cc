#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        string s1, s2;
        cin >> s1 >> s2;

        int ans = 0;
        for (int i = 0; i < s1.size(); ++i)
            if (s1[i] != s2[i])
                ans++;

        cout << "Hamming distance is " << ans << ".\n";
    }

    return 0;
}