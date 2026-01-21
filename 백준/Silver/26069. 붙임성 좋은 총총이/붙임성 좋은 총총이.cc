#include <bits/stdc++.h>
using namespace std;

unordered_set<string> st;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    while (n--) {
        string name1, name2;
        cin >> name1 >> name2;

        if (name1 == "ChongChong" || name2 == "ChongChong"
            || st.find(name1) != st.end() || st.find(name2) != st.end()) {
            st.insert(name1);
            st.insert(name2);
        }
    }

    cout << st.size() << "\n";

    return 0;
}