#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string name;
    getline(cin, name);

    bool chk = false;
    for (int i = 0; i < name.size(); ++i) {
        if (name[i] == '(') {
            cout << "\n";
            chk = true;
        } else if (name[i] == ')')
            cout << "\n";
        else
            cout << name[i];
    }

    if (!chk)
        cout << "\n-\n";
}