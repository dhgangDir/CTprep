#include <bits/stdc++.h>
using namespace std;

const int MAX = 20000;
vector<int> adj[MAX + 4];
int visited[MAX + 4];

bool bfs(int start) {
    queue<int> q;
    q.push(start);
    visited[start] = 1;

    while (!q.empty()) {
        auto u = q.front();
        q.pop();

        for (const auto& v : adj[u]) {
            if (visited[v] == visited[u])
                return false;
            if (visited[v] != 0)
                continue;
            visited[v] = visited[u] != 1 ? 1 : 2;
            q.push(v);
        }
    }
    return true;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int k;
    cin >> k;

    while (k--) {
        int V, E;
        cin >> V >> E;

        while (E--) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        bool isBipartite = true;
        for (int i = 1; i <= V; ++i) {
            if (visited[i] == 0) {
                if (!bfs(i)) {
                    isBipartite = false;
                    break;
                }
            }
        }
        
        cout << (isBipartite ? "YES" : "NO") << "\n";

        for (int i = 1; i <= V; ++i)
            adj[i].clear();
        fill(visited, visited + V + 1, 0);
    }

    return 0;
}