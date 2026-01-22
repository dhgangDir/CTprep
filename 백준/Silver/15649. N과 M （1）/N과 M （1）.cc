#include <bits/stdc++.h>
using namespace std;

vector<bool> visited;
vector<int> v;
int n, m;

void backtrack(int size) {
    if (size >= m) {
        for (auto& i : v)
            cout << i << " ";
        cout << "\n";
        return ;
    }
    for (int i = 1; i <= n; ++i) {
        if (visited[i]) {
            v[size] = i;
            visited[i] = false;
            backtrack(size + 1);
            visited[i] = true;
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;
    visited.resize(n + 1, true);
    v.resize(m);

    backtrack(0);

    return 0;
}