#include <bits/stdc++.h>
using namespace std;

map<int, bool> mp;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    while (n--) {
        int input;
        cin >> input;
        mp[input] = true;
    }

    int m;
    cin >> m;
    while (m--) {
        int input;
        cin >> input;
        if (mp.find(input) != mp.end())
            cout << "1 ";
        else
            cout << "0 ";
    }
    cout << "\n";

    return 0;
}