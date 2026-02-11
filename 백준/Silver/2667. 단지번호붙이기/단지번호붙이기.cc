#include <bits/stdc++.h>
using namespace std;

const int MAX = 25;

string adj[MAX + 4];
bool visited[MAX + 4][MAX + 4];
const int DX[] = {-1, 0, 1, 0}, DY[] = {0, 1, 0, -1};

vector<int> cnt;

int n;

int dfs(int u, int v) {
    visited[u][v] = true;
    int ret = 1;

    for (int i = 0; i < 4; ++i) {
        int nu = u + DX[i];
        int nv = v + DY[i];
        if (nu < 0 || nu >= n || nv < 0 || nv >= n)
            continue;
        if (visited[nu][nv] || adj[nu][nv] == '0')
            continue;
        ret += dfs(nu, nv);
    }

    return ret;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    for (int i = 0; i < n; ++i)
        cin >> adj[i];

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            if (adj[i][j] == '1' && !visited[i][j])
                cnt.push_back(dfs(i, j));

    sort(cnt.begin(), cnt.end());

    cout << cnt.size() << "\n";
    for (const auto& i : cnt)
        cout << i << "\n";

    return 0;
}