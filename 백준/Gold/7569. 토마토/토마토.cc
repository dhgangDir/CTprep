#include <bits/stdc++.h>
using namespace std;

const int MAX = 100;
const int DX[] = {0, 0, 0, 0, -1, 1};
const int DY[] = {-1, 0, 1, 0, 0, 0};
const int DZ[] = {0, 1, 0, -1, 0, 0};

int m, n, h;
int box[MAX + 4][MAX + 4][MAX + 4];

struct Node {
    int x, y, z;
};

queue<Node> q;
int ans;

int bfs() {
    int cnt = 0;

    while (!q.empty()) {
        Node cur = q.front();
        q.pop();

        for (int i = 0; i < 6; ++i) {
            int nx = cur.x + DX[i];
            int ny = cur.y + DY[i];
            int nz = cur.z + DZ[i];

            if (nx < 0 || nx >= h || ny < 0 || ny >= n || nz < 0 || nz >= m)
                continue;
            if (box[nx][ny][nz] != 0)
                continue;
            box[nx][ny][nz] = box[cur.x][cur.y][cur.z] + 1;
            ans = max(ans, box[nx][ny][nz]);
            q.push({nx, ny, nz});
            cnt++;
        }
    }

    return cnt;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> m >> n >> h;

    int cnt = 0;
    for (int i = 0; i < h; ++i)
        for (int j = 0; j < n; ++j)
            for (int k = 0; k < m; ++k) {
                cin >> box[i][j][k];
                if (box[i][j][k] == 1)
                    q.push({i, j, k});
                if (box[i][j][k] == 0)
                    cnt++;
            }

    if (cnt == bfs()) {
        if (ans != 0)
            cout << ans - 1 << "\n";
        else
            cout << 0 << "\n";
    }
    else
        cout << -1 << "\n";

    return 0;
}