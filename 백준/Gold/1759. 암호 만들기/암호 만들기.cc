#include <bits/stdc++.h>
using namespace std;

int l, c, flagm, flagj;
string character,cipher;

void func(int start, int depth) {
    if (depth == l) {
        if (flagm && flagj >= 2)
            cout << cipher << "\n";
        return ;
    }

    for (int i = start; i < c; ++i) {
        if (character[i] == 'a' || character[i] == 'o' || character[i] == 'u'
            || character[i] == 'i' || character[i] == 'e')
            flagm++;
        else
            flagj++;
        cipher[depth] = character[i];
        func(i + 1, depth + 1);
        if (character[i] == 'a' || character[i] == 'o' || character[i] == 'u'
            || character[i] == 'i' || character[i] == 'e')
            flagm--;
        else
            flagj--;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> l >> c;

    cipher.resize(l);
    character.resize(c);
    for (int i = 0; i < c; ++i)
        cin >> character[i];

    sort(character.begin(), character.end());
    func(0, 0);

    return 0;
}