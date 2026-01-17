#include <bits/stdc++.h>
using namespace std;

set<string, greater<string>> st;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    while (n--) {
        string name, target;
        cin >> name >> target;

        if (target == "enter")
            st.insert(name);
        else
            st.erase(name);
    }

    for (auto n : st)
        cout << n << "\n";

    return 0;
}