#include <bits/stdc++.h>
using namespace std;

int alpabet[26];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;

    for (auto c : s) {
        if (c >= 'A' && c <= 'Z') alpabet[c - 'A']++;
        else alpabet[c - 'a']++;
    }

    int maxNum = 0, maxIndex = 0;
    bool flag = false;
    for (int i = 0; i < 26; i++) {
        if (maxNum == alpabet[i]) flag = true;
        else if (maxNum < alpabet[i]) {
            maxNum = alpabet[i];
            maxIndex = i;
            flag = false;
        }
    }

    cout << (char)(flag ? '?' : maxIndex + 'A') << "\n";

    return 0;
}