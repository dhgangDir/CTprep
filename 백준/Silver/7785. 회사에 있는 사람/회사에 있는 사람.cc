#include <bits/stdc++.h>
using namespace std;

unordered_set<string> st;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    while (n--) {
        string name, ctl;
        cin >> name >> ctl;
        if (ctl == "enter")
            st.insert(name);
        else
            st.erase(name);
    }

    vector<string> v(st.size());
    int idx = 0;
    for (auto n : st) {
        v[idx] = n;
        idx++;
    }

    sort(v.begin(), v.end(), greater<string>());

    for (auto n : v)
        cout << n << "\n";

    return 0;
}