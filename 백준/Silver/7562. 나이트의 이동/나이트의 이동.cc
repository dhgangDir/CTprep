#include <bits/stdc++.h>
using namespace std;

const int DX[] = {-1, -2, -2, -1, 1, 2, 2, 1};
const int DY[] = {-2, -1, 1, 2, 2, 1, -1, -2};

void bfs(int l, int x1, int y1, int x2, int y2, vector<vector<int>>& board) {
    queue<pair<int, int>> q;
    q.push({x1, y1});
    board[x1][y1] = 0;

    while (!q.empty() && board[x2][y2] == -1) {
        auto it = q.front();
        q.pop();

        for (int i = 0; i < 8; ++i) {
            int nx = it.first + DX[i];
            int ny = it.second + DY[i];

            if (nx < 0 || nx >= l || ny < 0 || ny >= l)
                continue;
            if (board[nx][ny] != -1)
                continue;

            board[nx][ny] = board[it.first][it.second] + 1;
            q.push({nx, ny});
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int l;
        cin >> l;

        vector<vector<int>> board(l, vector<int>(l, -1));
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        bfs(l, x1, y1, x2, y2, board);

        cout << board[x2][y2] << "\n";
    }

    return 0;
}