#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    getline(cin, s);

    int start = 0;
    int end = s.find(" ");
    int ans = 0;
    while (end != string::npos) {
        if (s[start] != ' ') ans++;
        start = end + 1;
        end = s.find(" ", start);
    }
    if (start < s.size() && s[start] != ' ') ans++;
    cout << ans << "\n";

    return 0;
}