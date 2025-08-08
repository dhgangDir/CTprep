#include <iostream>
#include <queue>
#include <utility>
#include <algorithm>
using namespace std;

#define X first
#define Y second
#define MAX_ROW 1004
#define MAX_COL 1004
#define MAX_SIED 4

int dx[MAX_SIED] = {-1, 0, 1, 0};
int dy[MAX_SIED] = {0, -1, 0, 1};
queue<pair<int, int>> qu;

int store[MAX_ROW][MAX_COL];
int n, m;
int green_tomato, day;

void input() {
    cin >> m >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> store[i][j];
            if (!store[i][j]) green_tomato++;
            if (store[i][j] == 1)
                qu.push({i, j});
        }
    }
}

void solution() {
    if (!green_tomato) {
        cout << day << '\n';
        return ;
    }
    while (!qu.empty()) {
        auto cur = qu.front();
        qu.pop();
        for (int dir = 0; dir < MAX_SIED; dir++) {
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
            if (store[nx][ny] != 0) continue;
            store[nx][ny] = store[cur.X][cur.Y] + 1;
            day = max(day, store[nx][ny]);
            qu.push({nx, ny});
            green_tomato--;
        }
    }
    if (!green_tomato) cout << day - 1 << '\n';
    else cout << -1 << '\n';
}

void solve() {
    input();
    solution();
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}