#include <bits/stdc++.h>
using namespace std;

unordered_set<string> ust;
set<string> st;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    int cnt = n + m;
    while (cnt--) {
        string name;
        cin >> name;
        if (ust.find(name) == ust.end())
            ust.insert(name);
        else
            st.insert(name);
    }

    cout << st.size() << "\n";
    for (auto name : st)
        cout << name << "\n";

    return 0;
}