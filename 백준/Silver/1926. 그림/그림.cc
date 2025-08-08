#include <iostream>
#include <queue>
#include <utility>
using namespace std;

#define MAX_ROW 504
#define MAX_COL 504
#define DIRE 4

int paper[MAX_ROW][MAX_COL];
int n, m, max_num, feat;

bool visited[MAX_ROW][MAX_COL];
queue<pair<int, int>> qu;
int dx[DIRE] = {-1, 0, 1, 0};
int dy[DIRE] = {0, -1, 0, 1};

void input() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> paper[i][j];
        }
    }
}

void solution() {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (paper[i][j] && !visited[i][j]) {
                int cnt = 0;
                visited[i][j] = true;
                qu.push({i, j});
                while (!qu.empty()) {
                    pair<int, int> draw = qu.front();
                    qu.pop();
                    cnt++;
                    for (int dir = 0; dir < DIRE; dir++) {
                        int new_x = draw.first + dx[dir];
                        int new_y = draw.second + dy[dir];
                        if (new_x < 0 || new_x >= n || new_y < 0 || new_y >= m) continue;
                        if (visited[new_x][new_y] || !paper[new_x][new_y]) continue;
                        visited[new_x][new_y] = true;
                        qu.push({new_x, new_y});
                    }
                }
                max_num = max_num < cnt ? cnt : max_num;
                feat++;
            }
        }
    }
    cout << feat << '\n';
    cout << max_num << '\n';
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