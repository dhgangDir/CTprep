#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;
const int MAX = 20000;

vector<pair<int, int>> adj[MAX + 4];
int dist_arr[MAX + 4];

void dijkstra(int start) {
    fill(dist_arr, dist_arr + MAX + 4, INF);

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    pq.push({0, start});
    dist_arr[start] = 0;

    while (!pq.empty()) {
        int cost = pq.top().first;
        int cur = pq.top().second;
        pq.pop();

        if (dist_arr[cur] < cost) continue;

        for (auto edge : adj[cur]) {
            int next_cost = edge.first;
            int next_node = edge.second;

            int new_cost = cost + next_cost;

            if (new_cost < dist_arr[next_node]) {
                dist_arr[next_node] = new_cost;
                pq.push({new_cost, next_node});
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int V, E, K;
    cin >> V >> E >> K;

    while (E--) {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({w, v});
    }

    dijkstra(K);

    for (int i = 1; i <= V; ++i) {
        if (INF != dist_arr[i])
            cout << dist_arr[i] << "\n";
        else
            cout << "INF\n";
    }

    return 0;
}