#include <iostream>
#include <list>
using namespace std;

list<char> l;
int num;
char cmd, ch;
string str;

void input() {
    cin >> str >> num;
}

void solution() {
    for (const auto& ch : str) 
        l.push_back(ch);

    auto cursor = l.end();
    while (num--) {
        cin >> cmd;
        if (cmd == 'P') {
            cin >> ch;
            l.insert(cursor, ch);
        } else if (cmd == 'L') {
            if (cursor != l.begin()) cursor--;
        } else if (cmd == 'D') {
            if (cursor != l.end()) cursor++;
        } else {
            if (cursor != l.begin()) {
                cursor--;
                cursor = l.erase(cursor);
            }
        }
    }
    for (const auto& ch : l) cout << ch;
    cout << '\n';
}

void solve() {
    input();
    solution();
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}