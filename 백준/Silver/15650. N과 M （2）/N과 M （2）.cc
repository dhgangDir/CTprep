#include <bits/stdc++.h>
using namespace std;

vector<int> v;
int n, m;

void backtracking(int start, int size) {
    if (size == m) {
        for (const auto& i : v)
            cout << i << " ";
        cout << "\n";
        return ;
    }
    for (int i = start; i <= n; ++i) {
        v[size] = i;
        backtracking(i + 1, size + 1);
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