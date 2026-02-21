#include <bits/stdc++.h>
using namespace std;

const int MAX = 100;
int board[MAX + 4];
int next_pos[MAX + 4];

void bfs() {
    queue<int> q;
    q.push(1);
    board[1] = 1;

    while (!q.empty() && !board[MAX]) {
        int cur = q.front();
        q.pop();

        for (int i = 1; i <= 6; ++i) {
            int nx = cur + i;

            if (nx > MAX)
                continue;

            if (next_pos[nx] != 0)
                nx = next_pos[nx];

            if (board[nx] == 0) {
                q.push(nx);
                board[nx] = board[cur] + 1;
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n + m; ++i) {
        int from, to;
        cin >> from >> to;
        next_pos[from] = to;
    }

    bfs();

    cout << board[MAX] - 1 << "\n";

    return 0;
}