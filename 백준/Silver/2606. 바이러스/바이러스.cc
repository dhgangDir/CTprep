#include <bits/stdc++.h>
using namespace std;

const int MAX = 100;
vector<int> adj[MAX + 4];
bool visited[MAX + 4];
int ans = 0;

void dfs(int start) {
    visited[start] = true;
    ans++;
    for (const auto& i : adj[start])
        if (!visited[i])
            dfs(i);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    while (m--) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    dfs(1);

    cout << ans - 1 << "\n";

    return 0;
}