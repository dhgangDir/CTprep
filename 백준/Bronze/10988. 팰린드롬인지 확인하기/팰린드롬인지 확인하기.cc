#include <iostream>
using namespace std;

int func(string word, int r, int l) {
    if (l <= r) return 1;
    if (word[r] != word[l]) return 0;
    return func(word, r + 1, l - 1);
}

int main() {
    string word;

    cin >> word;

    cout << func(word, 0, word.size() - 1) << '\n';

    return 0;
}