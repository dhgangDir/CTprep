#include <bits/stdc++.h>
using namespace std;

unordered_set<int> a, b;

void input(int& size, unordered_set<int>& st) {
    while (size--) {
        int num;
        cin >> num;
        st.insert(num);
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;
    input(n, a);
    input(m, b);

    int cnt = 0;
    for (auto i : a) {
        if (b.find(i) != b.end())
            cnt++;
    }

    cout << a.size() + b.size() - 2 * cnt << "\n";

    return 0;
}