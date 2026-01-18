#include <bits/stdc++.h>
using namespace std;

unordered_map<int, int> mp;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    while (n--) {
        int input;
        cin >> input;
        mp[input]++;
    }

    int m;
    cin >> m;

    while (m--) {
        int target;
        cin >> target;
        cout << mp[target] <<  " ";
    }
    cout << "\n";

    return 0;
}