#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<int> v;

void backtracking(int size) {
    if (size == m) {
        for (const auto& i : v)
            cout << i << " ";
        cout << "\n";
        return ;
    }

    for (int i = 1; i <= n; ++i) {
        v[size] = i;
        backtracking(size + 1);
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;

    v.resize(m);
    backtracking(0);

    return 0;
}