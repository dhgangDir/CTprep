#include <bits/stdc++.h>
using namespace std;

const int MAX = 32000;
vector<int> adj[MAX + 4];
int indegree[MAX + 4];

void topological_sort(int n) {
    queue<int> q;

    for (int i = 1; i <= n; ++i) {
        if (indegree[i] == 0) {
            q.push(i);
        }
    }


    while (!q.empty()) {
        auto u = q.front();
        q.pop();

        cout << u << " ";
        for (const auto& v : adj[u]) {
            indegree[v]--;

            if (indegree[v] == 0)
                q.push(v);
        }
    }
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
        indegree[v]++;
    }

    topological_sort(n);

    return 0;
}