#include <bits/stdc++.h>
using namespace std;

unordered_set<string> st;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;

    for (int i = 1; i <= s.size(); ++i)
        for (int j = 0; j <= s.size() - i; ++j)
            st.insert(s.substr(j, i));

    cout << st.size() << "\n";

    return 0;
}