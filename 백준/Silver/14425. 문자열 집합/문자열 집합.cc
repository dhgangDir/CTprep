#include <bits/stdc++.h>
using namespace std;

set<string> st;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    while (n--) {
        string input;
        cin >> input;
        st.insert(input);
    }

    int ans = 0;
    while (m--) {
        string target;
        cin >> target;

        if (st.find(target) != st.end())
            ans++;
    }
    
    cout << ans << "\n";

    return 0;
}