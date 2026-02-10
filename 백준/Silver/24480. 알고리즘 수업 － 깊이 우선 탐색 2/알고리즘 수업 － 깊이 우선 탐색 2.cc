#include <bits/stdc++.h>
using namespace std;

const int MAX = 100000;
vector<int> adj[MAX + 4];
int visited[MAX + 4], cnt = 1;

void dfs(int r) {
    visited[r] = cnt++;
    for (const auto& x : adj[r])
        if (visited[x] == 0)
            dfs(x);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m, r;
    cin >> n >> m >> r;

    while (m--) {
        int v, e;
        cin >> v >> e;
        adj[v].push_back(e);
        adj[e].push_back(v);
    }

    for (int i = 1; i <= n; ++i)
        sort(adj[i].begin(), adj[i].end(), greater<int>());

    dfs(r);

    for (int i = 1; i <= n; ++i)
        cout << visited[i] << "\n";

    return 0;
}