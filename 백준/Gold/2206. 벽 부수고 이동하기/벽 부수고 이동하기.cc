#include <bits/stdc++.h>
using namespace std;

const int MAX = 1000;
string mp[MAX + 4];
int visited[MAX + 4][MAX + 4][2];
const int DX[] = {-1, 0, 1, 0};
const int DY[] = {0, 1, 0, -1};

struct Node {
    int x, y, z;
};

int n, m;

int bfs() {
    queue<Node> q;
    q.push({0, 0, 0});
    visited[0][0][0] = 1;

    while (!q.empty()) {
        auto cur = q.front();
        q.pop();

        if (cur.x == n - 1 && cur.y == m - 1) {
            return visited[cur.x][cur.y][cur.z];
        }

        for (int i = 0; i < 4; ++i) {
            int nx = cur.x + DX[i];
            int ny = cur.y + DY[i];

            if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;

            if (mp[nx][ny] == '0' && visited[nx][ny][cur.z] == 0) {
                visited[nx][ny][cur.z] = visited[cur.x][cur.y][cur.z] + 1;
                q.push({nx, ny, cur.z});
            }

            if (mp[nx][ny] == '1' && cur.z == 0 && visited[nx][ny][1] == 0) {
                visited[nx][ny][1] = visited[cur.x][cur.y][cur.z] + 1;
                q.push({nx, ny, 1});
            }
        }
    }

    return -1;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;

    for (int i = 0; i < n; ++i)
        cin >> mp[i];

    cout << bfs() << "\n";

    return 0;
}