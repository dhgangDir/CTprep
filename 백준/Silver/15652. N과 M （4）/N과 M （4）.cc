#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<int> v;

void backtracking(int start, int size) {
    if (m == size) {
        for (const auto& i : v)
            cout << i << " ";
        cout << "\n";
        return ;
    }

    for (int i = start; i <= n; ++i) {
        v[size] = i;
        backtracking(i, size + 1);
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;

    v.resize(m);
    backtracking(1, 0);

    return 0;
}