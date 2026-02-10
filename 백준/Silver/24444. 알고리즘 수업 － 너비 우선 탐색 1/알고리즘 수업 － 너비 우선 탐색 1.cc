#include <bits/stdc++.h>
using namespace std;

const int MAX = 100000;
vector<int> adj[MAX + 4];
int visited[MAX + 4], cnt = 1;

void bfs(int r) {
    queue<int> q;
    q.push(r);
    visited[r] = cnt++;

    while (!q.empty()) {
        int u = q.front();
        q.pop();

        for (const auto& v : adj[u])
            if (!visited[v]) {
                q.push(v);
                visited[v] = cnt++;
            }

    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m, r;
    cin >> n >> m >> r;

    while (m--) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for (int i = 1; i <= n; ++i)
        sort(adj[i].begin(), adj[i].end());

    bfs(r);

    for (int i = 1; i <= n; ++i)
        cout << visited[i] << "\n";

    return 0;
}